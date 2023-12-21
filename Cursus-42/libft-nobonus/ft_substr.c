/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:54:39 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/22 13:57:50 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*ptr;

	i = start;
	n = 0;
	if (ft_strlen(s) == 0 || len < 0 || start < 0 || start > ft_strlen(s))
		return ((char *)ft_calloc(1, 1));
	while (s[i] && n < len)
	{
		i++;
		n++;
	}
	ptr = (char *)malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[n] = '\0';
	return (ptr);
}
