/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:21:14 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/23 16:22:43 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
		{
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
		}
	}
	return (dst);
}
/*
int main()
{
	char d [] = "ARGENTINA";
	char d1 [] = "ARGENTINA";
	// char f [] = "zyxwvutsrqponmlkjihgfedcba";
	// char f1 [] = "zyxwvutsrqponmlkjihgfedcba";
	
	printf("%s\n", ft_memmove(d, f, 3));
	printf("%s", memmove(d1 + 5, d1, 3));
	return (0);
}
*/
