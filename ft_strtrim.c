/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:28:52 by frafal            #+#    #+#             */
/*   Updated: 2022/10/11 13:06:04 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);	
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
	}
	if (i == len)
		return ((char *)s1 + i);
	while (len > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[len - 1] == set[j])
			{
				len--;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
	}
	trim = (char *)malloc((len - i + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	j = 0;
	while (i < len)
	{
		trim[j] = s1[i];
		j++;
		i++;
	}
	trim[j] = '\0';
	return (trim);
}
