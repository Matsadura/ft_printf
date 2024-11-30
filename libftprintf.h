/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:18:17 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/30 21:21:04 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_spec
{
	char	spec;
	int		(*f)(va_list);
}	t_spec;

int	ft_printf(const char *str, ...);

/* Structure related functions */
int	init(t_spec **spec);
int	get_spec_func(char s, t_spec *sp, va_list arg);

/* Specificer functions */
int	put_mod(va_list arg);
int	put_char(va_list arg);
int	put_str(va_list arg);
int	put_nbr(va_list arg);
int	put_unbr(va_list arg);
int	put_xlower(va_list arg);
int	put_xupper(va_list arg);
int	put_p(va_list arg);

#endif /* LIBFTPRINTF_H */
