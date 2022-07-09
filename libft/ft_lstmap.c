/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 04:52:05 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/08 18:38:39 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*iter;
	t_list	*newlist;

	if (!lst)
		return (NULL);
	newlist = 0;
	while (lst)
	{
		iter = ft_lstnew(f(lst -> content));
		if (!iter)
		{
			ft_lstclear (&newlist, del);
			return (NULL);
		}
		ft_lstadd_back (&newlist, iter);
		lst = lst -> next;
	}
	return (newlist);
}

// void	del(t_list *list)
// {
// 	free(list);
// }

// void	sing(char *str)
// {
// 	printf("%s",str);
// }

// int	main()
// {
// 	t_list *list;
// 	t_list *Newlist;

// 	list = ft_lstnew(ft_strdup("hi\n"));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("my name is\n")));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("Slim\n")));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("Shady\n")));
// 	Newlist = ft_lstmap(list,(void *)sing,(void *)del);
// 	//ft_lstiter(list,(void *)sing);
// }