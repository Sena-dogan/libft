/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:52:21 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/07 04:36:39 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;
    
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
}

// void    del(void *asd)
// {
//     free (asd);
// }
// int main()
// {
//     t_list *list;

//     list = ft_lstnew(ft_strdup("ejderiya\n"));
//     ft_lstadd_back(&list, ft_lstnew(ft_strdup("vampire\n")));
//     ft_lstadd_back(&list, ft_lstnew(ft_strdup("spike\n")));
//     ft_lstadd_back(&list, ft_lstnew(ft_strdup("spiegel\n")));
//     ft_lstadd_front(&list, ft_lstnew(ft_strdup("kedii\n")));
//     ft_lstclear(&list, del);
//     printf ("%s\n", list->content);
// }