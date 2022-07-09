/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:27:38 by zdogan            #+#    #+#             */
/*   Updated: 2022/06/30 03:38:28 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = (char *)malloc(count * size);
	if (!str)
		return (0);
	return (ft_memset(str, 0, count * size));
}
/*
int	main(void)
{
	int	*a = ft_calloc(3, sizeof(int));

	printf("%d", *a);
}
*/