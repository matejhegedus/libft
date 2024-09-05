/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:03:45 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/05 12:27:48 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('T'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('b'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha('	'));
	printf("%d\n", ft_isalpha(2147483647));
	printf("%d\n", ft_isalpha(-2147483648));
	printf("%d\n", ft_isalpha(66));
}
*/