/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:56:11 by zdogan            #+#    #+#             */
/*   Updated: 2022/06/25 00:50:22 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// x src size
// y dest size 
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dlen)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	i = 0;
	if (dlen != '\0')
	{
		while (src[i] != '\0' && i < dlen - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (slen);
}
/*
int	main(void)
{
	size_t	slen;
	size_t	dlen;
	char	dest[10] = "";
	char	*src = "bumblebee";

	dlen = 5;
	slen = ft_strlcpy(dest, src, dlen);
	printf("%s", dest);
}
*/