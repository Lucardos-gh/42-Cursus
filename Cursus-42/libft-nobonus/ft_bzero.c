/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:13:08 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/07 15:54:13 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main()
{
	char b[] = "AAAAAA";
	char c[] = "AAAAAA";

	ft_bzero(b, 4);
	printf("%s\n", b);
	bzero(c, 4);
	printf("%s", c);
	return (0);
}*/