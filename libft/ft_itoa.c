/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:18:15 by rpunet            #+#    #+#             */
/*   Updated: 2020/07/13 19:22:41 by rpunet           ###   ########.fr       */
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

char		*ft_itoa(int n)
{
	unsigned int	nbr;
	int				len;
	char			*itoa;
	int				sign;

	sign = (n < 0) ? 1 : 0;
	nbr = (n < 0) ? (unsigned int)-n : (unsigned int)n;
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
