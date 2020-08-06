/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 21:06:05 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/06 04:04:04 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int	ft_printf(char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	int		printed;

	t_struct	*s;

	if (!(s = malloc(sizeof (t_struct))))
		return (-1);
	ft_struct_init(s);

	//int		pos;
	//int		ret;

	//pos = 0;
	//ret = 0;
	while (format[s->pos] != '\0' && !s->err)
	{
		if (format[s->pos] != '%' && format[s->pos])
			s->ret += write(1, &format[s->pos], 1);
		else if (format[s->pos] == '%')
		{
			s->pos++;
			if (ft_strchr(ALL, format[s->pos]) != NULL)
			{

				ft_check_flags(s, ap, format);
				if (!s->err)
					ft_tracker(s, ap, format);
				ft_struct_zero(s);
			}
			else
				return (-1);
		}

		s->pos++;
	}
	va_end(ap);
	if (s->err)
		return (-1);
	printed = s->ret;
	free (s);
	return (printed);
}

