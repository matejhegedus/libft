/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:04:54 by mhegedus          #+#    #+#             */
/*   Updated: 2024/10/06 22:18:51 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*chars;
	unsigned char	c_find;

	chars = (unsigned char *)s;
	c_find = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (chars[i] == c_find)
			return ((void *)&(chars[i]));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	const char *str = "Hello WoRLD!";

	printf("%s\n", str);
	printf("%s\n", (char *)ft_memchr(str, 'o', 13));
}
*/
