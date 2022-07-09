/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:58:31 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/06 22:24:52 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list	*lst;
	
	lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// #include <stdio.h>
// int	main()
// {
// 	t_list *lst;

// 	lst = ft_lstnew("Ero");
// 	lst = lst->next;
// 	lst = ft_lstnew("Sena");
// 	ft_lstadd_front(lst->content, ft_lstnew("Zeynep"));
// 	printf("%s\n", lst->content);
// }
