/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillase <nvillase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:10:56 by nvillase          #+#    #+#             */
/*   Updated: 2023/02/22 16:01:59 by nvillase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_conte_mot(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c)
		{
			i++;
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**s2;
	int		i;
	int		h;
	int		k;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_conte_mot(*s, c);
	s2 = (char **) malloc ((j + 1) * sizeof(char *));
	if (!s2)
		return (NULL);
	k = 0;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
		{
			h = i;
			while (s[i] != c)
				i++;
			s2[k] = ft_substr(s, h, i - h);
			k++;
		}
		i++;
	}
	s2[k] = '\0';
	return (s2);
}
