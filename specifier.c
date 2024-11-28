/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:53:45 by zzaoui            #+#    #+#             */
/*   Updated: 2024/11/28 19:20:32 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/**
 * init - Initializes the spec array
 */
void	init(t_spec **spec)
{
	static t_spec	sp[] = {
	{'%', put_mod},
	{'c', put_char},
	{'\0', NULL}
	};

	*spec = sp;
}

/**
 * get_spec_func - selects the correct function
 *	to perform the operation asked by the user
 * @s: the format specifier
 * @sp: the array of structs the contains {specifier, function}
 * 	collection
 * Return: the number of written bytes
 */
int	get_spec_func(char s, t_spec *sp, va_list arg)
{
	int	i;

	i = 0;
	while (sp[i].spec != '\0')
	{
		if (sp[i].spec == s)
			return (sp[i].f(arg));
		i++;
	}
	return (write(1, &s, 1));
}


/**
 *
 */
//int	write_result(char c, t_spec *sp, void *arg)
//{
//	int	(*f)(void *);
//
//	f = get_spec_func(c, sp);
//	if (f)
//		return (f(arg));
//	else
//		return (write(1, &c, 1));
//
//}
