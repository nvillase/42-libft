/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:43:36 by nvillase          #+#    #+#             */
/*   Updated: 2023/02/20 09:04:03 by nvillase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	s2 = (char *) malloc((len + 1) * sizeof(char));
	if (!s1 || !s2)
		return (NULL);
	ft_memcpy (s2, s1, len);
	s2[len] = '\0';
	return (s2);
}
