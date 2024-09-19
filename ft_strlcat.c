/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:59:17 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/19 19:55:01 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *c)
{
	int	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len])
	{
		if (dst_len == size)
			return (size);
		dst_len++;
	}
	i = 0;
	while (src[i] && ((dst_len + i) < (size - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "String one\0Blablabla";
	char src[] = "String2";

	printf("src: %s\ndest: %s\n", src, dest);
	printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("src: %s\ndest: %s\n", src, dest);
}
*/