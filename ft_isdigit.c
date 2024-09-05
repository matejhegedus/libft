/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:03:45 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/05 12:27:47 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit('b'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", ft_isdigit(5));
	printf("%d\n", ft_isdigit('	'));
	printf("%d\n", ft_isdigit(2147483647));
	printf("%d\n", ft_isdigit(-2147483648));
	printf("%d\n", ft_isdigit(66));
}
*/