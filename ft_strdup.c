/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:25:27 by mhegedus          #+#    #+#             */
/*   Updated: 2024/09/20 13:35:49 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t len;
	char *new_s;

	len = ft_strlen(s);
	new_s = malloc(sizeof(char) * (len + 1));
	if (new_s == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	
}