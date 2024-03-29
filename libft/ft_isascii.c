/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:17:30 by zdogan            #+#    #+#             */
/*   Updated: 2022/06/23 10:24:24 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//between 0 and octal 0177 --> between 0 and decimal 127 !!!
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isascii('M-^@'));
}
*/
// M-^@ --> oct 0200, dec 128