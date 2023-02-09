/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillase <nvillase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:32:56 by nvillase          #+#    #+#             */
/*   Updated: 2023/02/09 14:48:08 by nvillase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	char		tmpr[100];
	const char	*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		tmpr[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmpr[i];
		i++;
	}
	return (dest);
}
