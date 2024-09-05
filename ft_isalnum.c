/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:03:45 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/05 12:27:49 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum(48));
	printf("%d\n", ft_isalnum('b'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum(5));
	printf("%d\n", ft_isalnum('	'));
	printf("%d\n", ft_isalnum(2147483647));
	printf("%d\n", ft_isalnum(-2147483648));
	printf("%d\n", ft_isalnum(66));
}
*/