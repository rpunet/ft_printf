/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:32:20 by rpunet            #+#    #+#             */
/*   Updated: 2020/08/05 02:32:07 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "./libft/libft.h"

# define CONVERSIONS	"cspdiuxX%"
# define NUMBERS		"0123456789"
# define FLAGS			"-0.*"
# define ALL			"cspdiuxX%-0.*123456789"

// # define NEGATIVE		1

typedef struct		s_struct
{
	int	pos;
	int neg;
	int zero;
	int dot;
	int	precision;
	int	width;
	int err;
	int ret;
	int star;
	int starp;
	int sign;
	//int stop;
}					t_struct;

int		ft_printf(char *format, ...) ;//__attribute__ ((format (printf,1,2)));
void	ft_tracker(t_struct *flags, va_list ap, char *format);
void	char_convert(t_struct *s, va_list ap);
void	int_convert(t_struct *s, va_list ap);
void	ft_check_flags(t_struct *s, va_list ap, char *format);
void	ft_flags(t_struct *s, char *format);
void	ft_width(t_struct *s, char *format, va_list ap);
void	ft_precision(t_struct *s, char *format, va_list ap);
void	ft_check_flags(t_struct *s, va_list ap, char *format);
void	struct_init(t_struct *s);
void	ft_left_aligned(t_struct *s, char *str, int slen);
void	ft_right_aligned(t_struct *s, int slen);
void	ft_aux_zeros(t_struct *s, char *str, int slen);


#endif
