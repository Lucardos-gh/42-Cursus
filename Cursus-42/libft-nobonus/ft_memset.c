/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:49:44 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/07 16:31:11 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pointer;

	pointer = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*pointer = (unsigned char)c;
		pointer++;
		len--;
	}
	return (b);
}
/*
int main()
{
	char b[] = "AAAAAA";
	printf("%s\n", ft_memset(b, 'B', 3));
	printf("%s", memset(b, 'B', 3));
}*/
