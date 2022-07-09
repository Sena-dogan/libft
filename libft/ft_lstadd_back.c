/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:51:22 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/08 18:33:43 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *final;
    
    if (!*lst)
	{
		*lst = new;
		return ;
	}
    final = ft_lstlast(*(lst));
    final->next = new;
}

// #include <stdio.h>
// int main()
// {
//     t_list *list;

//     list = ft_lstnew("Ero");
//     ft_lstadd_front(&list, ft_lstnew("Seno"));
//     ft_lstadd_back(&list, ft_lstnew("Ejderiya"));
//     printf("%s\n", list->next->content);
// }