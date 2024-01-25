/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:00:48 by lucardos          #+#    #+#             */
/*   Updated: 2024/01/25 17:24:50 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_printchar(char c) 
{
	write(1, &c, 1);
	return (0);
}

int	ft_printnbr(int	nb)
{
	if (nb < 0) 
	{
		ft_printchar('-');
		nb = -nb;
	}

	if (nb >= 10) 
	{
	ft_printnbr(nb / 10);
	}

	ft_printchar('0' + nb % 10);
	return (0);
}
