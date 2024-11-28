/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:54:58 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/28 20:14:04 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
 #include <stdio.h>

/**
 * ft_printf - Writes output to stdout
 * @str: the string to parse
 * Return: the number of written bytes
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_spec	*spec;
	int		i;
	int		written;

	if (str == NULL)
		return (0);
	written = 0;
	i = 0;
	va_start(args, str);
	//va_arg(args, int);
	init(&spec);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			//printf("str[i] = %c\n", str[i]);
			written += get_spec_func(str[i + 1], spec, args);
			//written += get_spec_func(str[i + 1], spec)((void *)(va_arg(args, void *)));
			//written += write_result(str[i + 1], spec, (void *)&(char){va_arg(args, void *)});
			i += 1;
		}
		else
			written += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (written);
}
