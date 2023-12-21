/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:01:21 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/23 16:24:07 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*point;
	int		i;

	i = 0;
	point = ((char *)malloc (sizeof(char) * ft_strlen(s1) + 1));
	if (point == NULL)
		return (NULL);
	while (s1[i])
	{
		point[i] = s1[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}
