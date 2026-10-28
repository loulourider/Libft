/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 10:53:36 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:01 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// static void	del_print(void *content)
// {
// 	printf("delete de : %s\n", (char *) content);
// 	free(content);
// }
// int	main(void)
// {
// 	t_list	*lst;
// 	lst = ft_lstnew(strdup("coucou"));
// 	if (!lst)
// 		return (1);
// 	ft_lstdelone(lst, del_print);
// 	printf("OK\n");
// }