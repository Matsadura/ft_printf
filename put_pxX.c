/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pxX.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:46:46 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/30 18:30:05 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/**
 * put_x - Prints a number in hexadecimal
 *	lowercase format
 * @arg: the number to print (from va_list)
 * Return: the number of writter bytes
 */
int	put_xlower(va_list arg)
{
	char			buff[12];
	char			*base;
	int				i;

	unsigned int (n), (m);
	base = "0123456789abcdef";
	i = 0;
	n = va_arg(arg, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
	{
		n *= -1;
	}
	m = 1;
	while (n / m >= 16)
		m *= 16;
	while (m >= 1)
	{
		buff[i++] = base[(n / m) % 16];
		m /= 16;
	}
	buff[i] = '\0';
	return (write(1, &buff, ft_strlen(buff)));
}

/**
 * put_X - Prints a number in hexadecimal
 *	uppercase format
 * @arg: the number to print (from va_list)
 * Return: the number of writter bytes
 */
int	put_xupper(va_list arg)
{
	char			buff[12];
	char			*base;
	int				i;

	unsigned int (m), (n);
	base = "0123456789ABCDEF";
	i = 0;
	n = va_arg(arg, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
	{
		n *= -1;
	}
	m = 1;
	while (n / m >= 16)
		m *= 16;
	while (m >= 1)
	{
		buff[i++] = base[(n / m) % 16];
		m /= 16;
	}
	buff[i] = '\0';
	return (write(1, &buff, ft_strlen(buff)));
}
