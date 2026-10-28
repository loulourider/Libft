/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 14:41:48 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:10 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// static void	*plus_un(void *content)
// {
// 	int	*n;
// 	n = malloc(sizeof(int));
// 	*n = *(int *) content + 1;
// 	return (n);
// }
// int	main(void)
// {
// 	int		x;
// 	int		y;
// 	t_list	a;
// 	t_list	b;
// 	t_list	*copy;
// 	x = 10;
// 	y = 20;
// 	a.content = &x;
// 	a.next = &b;
// 	b.content = &y;
// 	b.next = NULL;
// 	copy = ft_lstmap(&a, plus_un, free);
// 	printf("copie : %d -> %d\n", *(int *) copy->content,
// 		*(int *) copy->next->content);
// 	ft_lstclear(&copy, free);
// 	return (0);
// }