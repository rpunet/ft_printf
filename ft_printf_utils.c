/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 22:14:13 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/06 02:52:28 by rpunet           ###   ########.fr       */
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
