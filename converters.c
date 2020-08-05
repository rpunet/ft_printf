/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 21:40:59 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/05 19:56:12 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	char_convert(t_struct *s, va_list ap)
{
	unsigned char	a;

	a = (unsigned char)va_arg(ap, int);
	if (s->neg == 0)
	{
		while (s->width-- > 1)
			s->ret += write(1, " ", 1);
	}
	s->ret += write(1, &a, 1);
	if (s->neg == 1)
	{
		while (s->width-- > 1)
			s->ret += write(1, " ", 1);
	}


}
