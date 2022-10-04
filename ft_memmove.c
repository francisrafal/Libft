/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:16:06 by frafal            #+#    #+#             */
/*   Updated: 2022/10/04 17:59:42 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp[n];

	//	tmp = malloc(sizeof(char) * n);
	//if (tmp == NULL)
	//	return (NULL);;
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	//free(tmp);
	return (dest);
	// https://www.geeksforgeeks.org/write-memcpy/
}
