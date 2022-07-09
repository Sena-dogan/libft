/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:30:34 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/08 17:51:12 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list *list;

// 	list = ft_lstnew("Ero");
// 	ft_lstadd_front(&list, ft_lstnew("Zeynep"));
// 	ft_lstadd_front(&list, ft_lstnew("Sena"));
// 	ft_lstadd_front(&list, ft_lstnew("Ejderiya"));
// 	printf("%d\n", ft_lstsize(list));
// }