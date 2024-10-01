/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:40:27 by mhegedus          #+#    #+#             */
/*   Updated: 2024/10/01 21:07:52 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	char_count;

	char_count = 0;
	while (s[char_count] != '\0')
		char_count++;
	return (char_count);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "Nice";
	printf("%d", ft_strlen(str));
}
*/