/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:27:12 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/06 15:56:31 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int	main(void)
{
	int fd;
	char *s;
	fd = open("a.txt", O_CREAT|O_RDWR, 0777);
	s = ft_strdup("challenger");
	printf("%s\n", s);
	ft_putstr_fd(s, fd);
	free(s);
}
*/