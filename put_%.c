/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_%.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:36:09 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/29 21:48:31 by zzaoui           ###   ########.fr       */
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

/**
 * put_str - prints a string
 * Return: The number of written bytes
 */
int	put_str(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

/**
 * put_nbr - prints a number
 * Return: the number of written bytes
 */
int	put_nbr(va_list arg)
{
	char	*n;
	int		written;

	n = ft_itoa(va_arg(arg, int));
	written = write(1, n, ft_strlen(n));
	if (n != NULL)
		free(n);
	return (written);
}
