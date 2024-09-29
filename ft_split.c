/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:55:15 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/29 16:03:26 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t   count_words(char const *s, char delimiter)
{
    size_t  count;
    size_t  i;

    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == delimiter)
            i++;
        if (s[i] && s[i] != delimiter)
        {
            count++;
            i++;
        }
        while (s[i] && s[i] != delimiter)
            i++;
    }
    return (count);
}

static size_t   get_word_len(char const *s, char delimiter)
{
    size_t  i;

    i = 0;
    while (s[i] && s[i] != delimiter)
        i++;
    return (i);
}

static char const *skip_delimiter(char const *s, char c)
{
    while (*s == c)
        s++;
    return (s);
}

char    **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  num_of_words;
    size_t  word_len;
    char    **result;

    num_of_words = count_words(s, c);
    result = malloc(num_of_words * sizeof(char *) + 1);
    s = skip_delimiter(s, c);
    i = 0;
    
    while (i < num_of_words)
    {
        word_len = get_word_len(s, c);
        result[i] = malloc(word_len * sizeof(char));
        j = 0;
        while (j < word_len)
        {
            result[i][j] = s[j];
            j++;
        }
        s = s + word_len;
        s = skip_delimiter(s, c);
        result[i][j] = '\0';
        i++;
    }
    result[i] = malloc(1 * sizeof(char));
    result[i][0] = '\0';
    return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char **arr = ft_split("  This is a    String   ", ' ');
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", arr[i]);
    }
}
*/