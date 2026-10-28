/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 11:32:04 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:14 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count += 1;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node;
// 	list = NULL;
// 	printf("Liste vide : %d (attendu 0)\n", ft_lstsize(list));
// 	node = ft_lstnew("c");
// 	ft_lstadd_front(&list, node);
// 	printf("1 élément  : %d (attendu 1)\n", ft_lstsize(list));
// 	node = ft_lstnew("b");
// 	ft_lstadd_front(&list, node);
// 	node = ft_lstnew("a");
// 	ft_lstadd_front(&list, node);
// 	printf("3 éléments : %d (attendu 3)\n", ft_lstsize(list));
// 	return (0);
// }
