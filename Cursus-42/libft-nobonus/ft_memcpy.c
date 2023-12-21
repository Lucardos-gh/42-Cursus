/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:07:35 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/10 14:18:01 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destino;

	destino = (unsigned char *)dst;
	if (src == 0 && dst == 0)
		return (dst);
	while (n > 0)
	{
		*destino = *(unsigned char *)src;
		destino++;
		src++;
		n--;
	}
	return (dst);
}
/*
int main()
{
	char d [] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char d1 [] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char f [] = "zyxwvutsrqponmlkjihgfedcba";
	char f1 [] = "zyxwvutsrqponmlkjihgfedcba";
	
	printf("%s\n", ft_memcpy(d, f, 14));
	printf("%s", memcpy(d1, f1, 14));
	return (0);
}
*/