/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:06:51 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/07 04:19:29 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	lst->content = NULL;
	lst->next = NULL;
	free(lst);
	lst = NULL;
}

// void    del(void *asd)
// {
//     free (asd);
// }

// int main()
// {
//     t_list  *lst;
//     lst = ft_lstnew(ft_strdup("ero"));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("ejderiya")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("kedi")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("a")));
//     ft_lstdelone(ft_lstlast(lst), del);
//     printf ("%s\n", lst->content);
// }
