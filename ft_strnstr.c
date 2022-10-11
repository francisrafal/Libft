/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:09:51 by frafal            #+#    #+#             */
/*   Updated: 2022/10/11 15:06:06 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (big == NULL || little == NULL)
		return (NULL);
	if (little[0] == 0)
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i < len - little_len + 1)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (j < little_len)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
			if (j == little_len)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
