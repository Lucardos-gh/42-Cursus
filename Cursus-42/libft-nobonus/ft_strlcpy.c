/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:13:40 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/23 16:27:54 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char dst[] = "string original";
	const char *src = "copiado";
	size_t sizeFinal = 9;
	int i;

	printf("string original:%s\n", dst);
	i = ft_strlcpy(dst, src, sizeFinal);
	printf("Modified string:%s\n", dst);
	printf("Return Value:%d\n", i);
}
*/
