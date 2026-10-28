/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 14:13:03 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:54:14 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		lst = &(*lst)->next;
	}
	(*lst) = new;
}

// int	main(void)
// {
// 	int		a = 1;
// 	int		b = 2;
// 	int		c = 3;
// 	t_list	*first = ft_lstnew(&a);
// 	t_list	*second = ft_lstnew(&b);
// 	t_list	*third = ft_lstnew(&c);
// 	ft_lstadd_back(&first, second);
// 	ft_lstadd_back(&first, third);
// 	printf("%d %d %d", *(int *) first->content,
//      *(int *) first->next->content,
//       *(int *) first->next->next->content);
// }
