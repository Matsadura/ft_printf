/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:18:17 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/28 19:04:05 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_spec
{
	char	spec;
	//int		(*f)(char *, int *);
	//int		(*f)(char *);
	//int		(*f)(void *);
	int		(*f)(va_list);
}	t_spec;

void	init(t_spec **spec);
//int	(*get_spec_func(char s, t_spec *sp))(void *);
int	get_spec_func(char s, t_spec *sp, va_list arg);
int	write_result(char c, t_spec *sp, void *arg);

int	ft_printf(const char *str, ...);

int	put_mod(va_list arg);
int	put_char(va_list arg);
#endif /* LIBFTPRINTF_H */
