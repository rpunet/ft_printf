/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:18:15 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/11 04:53:48 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dec_count(unsigned int ncpy, int lng)
{
	while (ncpy >= 10)
	{
		ncpy /= 10;
		lng++;
	}
	return (lng);
}

char		*ft_itoa(long int n)
{
	long int	nbr;
	int				len;
	char			*itoa;
	int				sign;

	sign = (n < 0) ? 1 : 0;
	nbr = (n < 0) ? -n : n;
	len = ft_dec_count(nbr, 1);
	len += sign;
	if (!(itoa = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	itoa[len] = '\0';
	while (len-- > sign)
	{
		itoa[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign == 1)
		itoa[0] = '-';
	return (itoa);
}
