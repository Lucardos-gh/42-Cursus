/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:33:22 by lucardos          #+#    #+#             */
/*   Updated: 2024/01/25 17:50:22 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int	ft_printstr(char *s);
int	ft_printnbr(int nb);

int printFormat (char type, va_list argParam, int count)
{
	int	i;

	i = 0;
	if	(type == 'c')
	{
		i = va_arg(argParam, int);
		write (1, &i, 1);
		count++;
	}
	if (type == '%')
	{
		write(1, "%", 1);
		count++;
	}
	if (type == 's')
		count = count + ft_printstr(va_arg(argParam, char *));
	if (type == 'i')
		count = count + ft_printnbr(va_arg(argParam, int));
	return (count);
	
}

int	ft_printf(char const *str, ...)
{
	int	i;
	int count;
	va_list param;

	i = 0;
	count = 0;
	va_start (param, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count = printFormat(str[i], param, count);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int main ()
{
	int n;
	char *string = "STRING";
 	n = ft_printf ("hola %c %s %i", 'C', string, 12345);
	printf("\nBytes totales %d", n);
	return (0);
}