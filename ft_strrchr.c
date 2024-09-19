/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:22:13 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/19 20:43:48 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	char *c_occ;

	i = 0;
	c_occ = 0;
	while (s[i])
	{
		if (s[i] == c)
			c_occ = ((char *)&(s[i]));
		i++;
	}
	if (c == '\0')
		c_occ = (char *)&(s[i]);
	return (c_occ);
}
/*
#include <stdio.h>
int main(void)
{
	const char *str = "Hello WoRLD!";

	printf("%s\n", str);
	printf("%s\n", ft_strrchr(str, 'o'));
}
*/
