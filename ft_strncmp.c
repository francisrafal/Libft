/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:23:41 by frafal            #+#    #+#             */
/*   Updated: 2022/10/06 12:58:17 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		c1;
	int		c2;

	if (n == 0)
		return (0);
	i = 0;
	c1 = (unsigned char)s1[i];
	c2 = (unsigned char)s2[i];
	while (s1[i] != '\0' && i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	if (c1 == '\0')
		return (c1 - c2);
	return (0);
}
