/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:07:24 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/23 16:19:12 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calcsize(int n, long ln)
{
	int		i;

	i = 1;
	while (ln > 9)
	{
		ln = ln / 10;
		i++;
	}
	if (n < 0)
		i += 2;
	else
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*str;
	int		len;

	ln = (long)n;
	if (ln < 0)
		ln *= -1;
	len = ft_calcsize(n, ln);
	str = (char *)ft_calloc(len, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	while (--len > 0 && ln >= 1)
	{
		str[len - 1] = ln % 10 + 48;
		ln = ln / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
