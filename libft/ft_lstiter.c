/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeynepsena <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:39:57 by zeynepsena        #+#    #+#             */
/*   Updated: 2022/07/09 16:40:24 by zeynepsena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f (lst -> content);
		lst = lst -> next;
	}
}

// void    f(void *x)
// {
//     printf("%s \n", (char *)x);
// }

// int main(void)
// {
//     t_list *list;
	    
//     list = ft_lstnew("asd");
//     ft_lstadd_front(&list, ft_lstnew("eren"));
//     ft_lstadd_front(&list, ft_lstnew("asd"));
//     ft_lstadd_front(&list, ft_lstnew("skoobie kaşp"));
//     ft_lstiter(list, f);
// }
