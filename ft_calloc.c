/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:55:36 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/20 11:23:36 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// returns 1 if multiplying the 2 numbers results in an overflow
// else returns 0
static char	is_overflow(size_t nmemb, size_t size)
{
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	is_overflow(size_t nmemb, size_t size);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
}
