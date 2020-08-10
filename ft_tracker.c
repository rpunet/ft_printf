/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tracker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:08:43 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/10 18:18:02 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tracker(t_struct *s, va_list ap, char *format)
{


	if (format[s->pos] == 'c' && s->zero == 0)
		char_convert(s, ap);
	else if (format[s->pos] == 'd' || format[s->pos] == 'i')
		int_convert(s, ap);
	else if (format[s->pos] == 's')
		str_convert(s, ap);
	else if (format[s->pos] == 'p'/*  && s->dot == 0 && s->zero == 0 */)
		ptr_convert(s, ap);
	else
		s->err = 1;
	//return (s->err ? -1 : *ret);



}
