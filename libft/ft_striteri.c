/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:44:50 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/06 16:01:51 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	f(unsigned int x, char *str)
{
	str[0] -= 32;
}

int	main(void)
{
	char	*str;

	str = ft_strdup("hellcat");
	ft_striteri(str, f);
	printf("%s\n", str);
}
*/