/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:40:22 by mhegedus          #+#    #+#             */
/*   Updated: 2024/10/08 20:57:03 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i <= (len - little_len))
	{
		if (ft_strncmp(little, &big[i], little_len) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	//printf("%s\n", strnstr("faketext", "fake", 3));

	if (ft_strnstr(NULL, "fake", 3) == NULL)
		printf("null\n");
	//ft_strnstr("faketext", "fake", 3);
}
*/