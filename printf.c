/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:54:58 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/27 20:27:47 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/**
 * ft_printf - Writes output to stdout
 * @str: the string to parse
 * Return: the number of written bytes
 */
int	ft_printf(const char *str, ...)
{
	int	index;
	int	written;
	va_list	vars;

	written = 0;
	index = 0;
	va_start(vars, format);
	va_arg(vars, int);
	while(format[i] != '\0')
	{
		//if (format[i] == )
	}
	va_end(vars);
	return (written);
}
