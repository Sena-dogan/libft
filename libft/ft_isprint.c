/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:32:51 by zdogan            #+#    #+#             */
/*   Updated: 2022/06/23 09:05:50 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//printing characters, including space(dec32) -> (dec126)"~"   (*del-127*)
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isprint('M-^@'));
}
*/