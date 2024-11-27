/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:18:17 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/27 19:21:21 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"

typedef struct	s_spec {
	char	spec;
	int	(*f)(char *, int *);
} t_spec;

#endif /* LIBFTPRINTF_H */
