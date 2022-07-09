/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:45:46 by zdogan            #+#    #+#             */
/*   Updated: 2022/06/30 00:12:27 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*zero;

	zero = s;
	while (n != 0)
	{
		*zero++ = 0;
		n--;
	}
}
/*
int	main(void)
{
	char	s[] = "bumblebee";
	ft_bzero(s, 5);
	printf ("%s\n", s);
}
*/