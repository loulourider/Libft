/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 14:39:55 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	to_upper(void *content)
// {
// 	char	*s;
// 	int		i;
// 	s = (char *) content;
// 	i = 0;
// 	while (s[i])
// 	{
// 		s[i] = ft_toupper(s[i]);
// 		i++;
// 	}
// }
// static void	print_content(void *content)
// {
// 	printf("%s\n", (char *) content);
// }
// int	main(void)
// {
// 	t_list	*lst;
// 	lst = ft_lstnew(ft_strdup("un"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("deux")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("trois")));
// 	ft_lstiter(lst, to_upper);
// 	ft_lstiter(lst, print_content);
// 	ft_lstiter(NULL, to_upper);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }