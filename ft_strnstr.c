/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:40:22 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/20 13:35:12 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_substrcmp(const char *substr, const char *str)
{
	size_t	i;

	i = 0;
	while (substr[i])
	{
		if (substr[i] - str[i] != 0)
			return (substr[i] - str[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i <= (len - little_len))
	{
		if (ft_substrcmp(little, &big[i]) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("This is a test string", "test", 21));
}
*/