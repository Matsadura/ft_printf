/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_%.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:36:09 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/28 19:14:56 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/**
 * put_mod - prints a modulo
 * Return: the number of written bytes
 */
int	put_mod(va_list arg)
{
	(void) arg;
	return (write(1, "%", 1));
}

/**
 * putc - prints a character
 * Return: the number of written bytes
 */
int	put_char(va_list arg)
{
	char	c;

	c = (char)va_arg(arg, int);
	return (write(1, &c, 1));
}
