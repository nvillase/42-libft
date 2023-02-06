/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:07:18 by nvillase          #+#    #+#             */
/*   Updated: 2023/02/06 18:38:44 by nvillase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	ac = ac;
	printf("la chaine de caracteres deviens <%s>", (char *)ft_memset(av[1], 'x', 6));
	return (0);
}
