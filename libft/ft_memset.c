/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:52:18 by zdogan            #+#    #+#             */
/*   Updated: 2022/06/26 11:35:33 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)dest;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char s[] = "bumblebee";

	printf("%s", ft_memset(s, 'l', 1));
}
*/