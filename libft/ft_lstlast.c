/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:42:22 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/08 18:31:35 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    while (lst && lst->next)
        lst = lst->next;
    return (lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list *list;

// 	list = ft_lstnew("Ero");
// 	ft_lstadd_front(&list, ft_lstnew("Zeynep"));
// 	ft_lstadd_front(&list, ft_lstnew("Sena"));
// 	ft_lstadd_front(&list, ft_lstnew("Ejderiya"));
// 	list = ft_lstlast(list);
//     printf("%s\n", list->content);
// }
