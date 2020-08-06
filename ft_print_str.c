/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 04:31:36 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/06 04:31:49 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_right_aligned_s(t_struct *s, int slen)
{
	{
		if (s->dot == 1 && s->precision < slen)
		{
			while (s->width-- > s->precision)
				s->ret += write(1, " ", 1);
		}
		else
		{
			while (s->width-- > slen)
				s->ret += write(1, " ", 1);
		}
	}
}

void	ft_left_aligned_s(t_struct *s, int slen)
{
	{
		if (s->dot == 1 && s->precision < slen)
		{
			while (s->width-- > s->precision)
				s->ret += write(1, " ", 1);
		}
		else
		{
			while (s->width-- > slen)
				s->ret += write(1, " ", 1);
		}
	}
}

void	str_convert(t_struct *s, va_list ap)
{
	char	*str;
	int		slen;

	str = (char *)va_arg(ap, char*);
	if (str == NULL)
		str = "(null)";
	slen = (int)ft_strlen(str);
	if (s->neg == 0)
		ft_right_aligned_s(s, slen);
	if (s->dot == 1 && s->precision < slen)
		s->ret += write(1, str, s->precision);
	else
		s->ret += write(1, str, slen);
	if (s->neg == 1)
		ft_left_aligned_s(s, slen);
}
