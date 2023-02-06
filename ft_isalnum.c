/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:10:49 by nvillase          #+#    #+#             */
/*   Updated: 2023/02/03 13:33:36 by nvillase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	ac = ac;
	if (ft_isalnum(*av[1]) == 1)
	{
		printf("<%c>est un caractere alphanumerique\n", *av[1]);
		return (0);
	}
	printf("<%c>n est pas un caractere alphanumerique\n", *av[1]);
	return (0);
}
