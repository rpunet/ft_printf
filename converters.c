/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 21:40:59 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/06 02:43:49 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	str_convert(t_struct *s, va_list ap)
{
	char	*str;
	int		slen;

	str = (char *)va_arg(ap, char*);
	if (str == NULL)
		str = "(null)";
	slen = (int)ft_strlen(str);
	if (s->neg == 0)
	{
		while (s->width-- > (s->dot ? s->precision : slen))
			s->ret += write(1, " ", 1);
	}
	if (s->dot == 1)
		s->ret += write(1, str, s->precision);
	else
		s->ret += write(1, str, slen);
	if (s->neg == 1)
	{
		while (s->width-- > (s->dot ? s->precision : slen))
			s->ret += write(1, " ", 1);
	}
}
