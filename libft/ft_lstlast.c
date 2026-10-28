/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 14:09:50 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:09 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;
// 	a.content = "un";
// 	a.next = &b;
// 	b.content = "deux";
// 	b.next = &c;
// 	c.content = "trois";
// 	c.next = NULL;
// 	printf("dernier : %s\n", (char *) ft_lstlast(&a)->content);
// 	printf("liste NULL : %p\n", (void *) ft_lstlast(NULL));
// 	return (0);
// }