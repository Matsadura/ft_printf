/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:44:53 by zzaoui            #+#    #+#             */
/*   Updated: 2024/12/01 16:44:55 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_strlen - calcuate the length of a string
 * @str: the string
 * Return: The length of str
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
 * ft_strdup - Duplicate a string
 * @s: The string
 * Return: A pointer to a new string which is a duplicate
 *	of the string s.
 */
char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	str = (char *) malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * ft_itoa - Allocates and returns a string reprresenting
 *		an integer received as argument.
 * @n: the integer to convert
 * Return: the string representing the integer, NULL otherwise.
 */
char	*ft_itoa(int n)
{
	char			buff[12];
	unsigned int	m;
	int				i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		buff[i++] = '-';
		n = (unsigned int) -n;
	}
	m = 1;
	while (n / m >= 10)
		m *= 10;
	while (m >= 1)
	{
		buff[i++] = ((n / m) % 10) + '0';
		m /= 10;
	}
	buff[i] = '\0';
	return (ft_strdup(buff));
}
