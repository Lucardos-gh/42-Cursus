/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:33:22 by lucardos          #+#    #+#             */
/*   Updated: 2023/12/20 16:04:58 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int	i;
	va_list param;

	i = 0;
	va_start (param, str)
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			param(str[i], param);
		}
	
	}