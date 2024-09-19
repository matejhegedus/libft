/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:22:13 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/19 20:37:44 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&(s[i]));
		i++;
	}
	if (c == '\0')
		return ((char *)&(s[i]));
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	const char *str = "Hello WoRLD!";

	printf("%s\n", str);
	printf("%s\n", ft_strchr(str, 'o'));
}
*/