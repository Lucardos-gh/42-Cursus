/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:35:28 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/17 16:36:38 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	c1;

	i = 0;
	s1 = ((char *)s);
	c1 = ((char )c);
	while (i < n)
	{
		if (s1[i] == c1)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
