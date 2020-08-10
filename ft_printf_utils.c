/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 22:14:13 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/10 17:02:45 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_struct_init(t_struct *s)
{
	s->pos = 0;
	s->neg = 0;
	s->zero = 0;
	s->width = 0;
	s->dot = 0;
	s->precision = 0;
	s->err = 0;
	s->ret = 0;
	s->star = 0;
	s->starp = 0;
	s->sign = 0;
}

void	ft_struct_zero(t_struct *s)
{
	s->neg = 0;
	s->zero = 0;
	s->width = 0;
	s->dot = 0;
	s->precision = 0;
	s->star = 0;
	s->starp = 0;
	s->sign = 0;
}

char	*ft_itoa_base(unsigned long nbr, char *base)
{
	char			*str;
	int				bslen;
	unsigned long	nbrcopy;
	int				i;

	nbrcopy = nbr;
	i = 1;
	bslen = (int)ft_strlen(base);
	while ((nbrcopy /= bslen) >= 1)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	while (i-- > 0)
	{
		str[i] = base[nbr % bslen];
		nbr /= bslen;
	}
	return (str);
}
