/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:22:40 by frafal            #+#    #+#             */
/*   Updated: 2022/10/11 15:02:58 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*a;
	int		digits;
	int		sign;
	int		num;
	int		i;

	num = n;
	digits = 1;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
	}
	while (num / 10 != 0)
	{
		digits++;
		num /= 10;
	}
	a = (char *)malloc((sign + digits + 1) * sizeof(char));
	if (n == INT_MIN)
	{
		ft_memmove(a, "-2147483648", 12);
		return (a);
	}
	if (n < 0)
	{
		n = -n;
	}
	if (a == NULL)
		return (NULL);
	i = 0;
	if (sign == 1)
	{
		a[i] = '-';
		i++;
	}
	a[sign + digits] = '\0';
	while (digits > 0)
	{
		a[sign + digits - 1] = n % 10 + '0';
		digits--;
		n /= 10;
	}
	return (a);
}
