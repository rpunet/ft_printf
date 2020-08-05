/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tracker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:08:43 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/05 19:58:28 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tracker(t_struct *s, va_list ap, char *format)
{
	char	*str;

	if (format[s->pos] == 'c' )
		char_convert(s, ap);


	else if (format[s->pos] == 'd' || format[s->pos] == 'i')
		int_convert(s, ap);
	else if (format[s->pos] == 's')
	{
		str = va_arg(ap, char*);
		ft_putstr_fd(str, 1);
		s->ret += ft_strlen(str);

	}
	else
		s->err = 1;
	//return (s->err ? -1 : *ret);



}
