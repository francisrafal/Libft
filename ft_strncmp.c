/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:23:41 by frafal            #+#    #+#             */
/*   Updated: 2022/10/04 15:24:06 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		c1;
	int		c2;

	if (n == 0)
		return (0);
	i = 0;
	c1 = s1[i];
	c2 = s2[i];
	while (s1[i] != '\0' && i < n)
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	if (c1 == '\0')
		return (c1 - c2);
	return (0);
}

*/

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    i;

    i = 0;
    while (s1[i] && (i < n) && s2[i])
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else if ((s1[i] - s2[i]) > 0)
            return (1);
        else if ((s1[i] - s2[i]) < 0)
            return (-1);
    }
    if (i < n)
    {
        if ((s1[i] - s2[i]) > 0)
            return (1);
        if ((s1[i] - s2[i]) < 0)
            return (-1);
    }
    return (0);
}
