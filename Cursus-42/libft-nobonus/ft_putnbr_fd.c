/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:19:18 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/22 14:20:41 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	int		sign;

	sign = 48;
	ln = (long)n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln *= -1;
	}
	if (ln > 9)
	{
		ft_putnbr_fd((int)(ln / 10), fd);
		ft_putchar_fd(ln % 10 + 48, fd);
	}
	else
		ft_putchar_fd(ln + '0', fd);
}
/*int	main(void)
{
	int	n = -552;

	ft_putnbr_fd(n, 1);
}*/
