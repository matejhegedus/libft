/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:08:10 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/25 13:49:38 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	result_len;
	char	*result;
	size_t	i;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (start + len <= s_len)
		result_len = len;
	else
		result_len = s_len - start;
	result = malloc(result_len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < result_len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	const char *str = "This is a String";
	printf("%s", ft_substr(str, 17, 1));
}
*/