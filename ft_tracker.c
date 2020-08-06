/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tracker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:08:43 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/06 01:39:18 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tracker(t_struct *s, va_list ap, char *format)
{


	if (format[s->pos] == 'c' && s->zero == 0)
		char_convert(s, ap);


	else if (format[s->pos] == 'd' || format[s->pos] == 'i')
		int_convert(s, ap);

	else if (format[s->pos] == 's' && s->zero == 0)
	{
		str_convert(s, ap);


	}
	else
		s->err = 1;
	//return (s->err ? -1 : *ret);



}
