/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucardos <lucardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:04:41 by lucardos          #+#    #+#             */
/*   Updated: 2023/11/22 14:04:57 by lucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_less(char **matrix, size_t count)
{
	matrix[count] = NULL;
	return (0);
}

static size_t	ft_next(char const *s, char c, size_t i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	count;
	size_t	co;

	co = 0;
	count = ft_words(s, c);
	matrix = (char **)malloc((count + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = ft_less(matrix, count);
	while (co < count && s[i])
	{
		if (s[i] != c)
		{
			matrix[co++] = ft_substr(s, i, ft_next(s, c, i) - i);
			if (matrix[co - 1] == NULL)
				return (ft_free(matrix));
			i = ft_next(s, c, i);
		}
		else
			i++;
	}
	return (matrix);
}
