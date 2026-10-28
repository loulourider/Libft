/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 11:00:39 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:45:59 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
// int	main(void)
// {
// 	t_list	*lst;
// 	lst = ft_lstnew(strdup("un"));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("deux")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("trois")));
// 	printf("taille avant : %d\n", ft_lstsize(lst));
// 	ft_lstclear(&lst, free);
// 	if (lst == NULL)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");
// 	ft_lstclear(NULL, free);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }