/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 09:22:50 by username         #+#    #+#              */
/*   Updated: 2026/10/26 09:34:19 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int	main(void)
// {
// 	ft_putstr_fd("coucou", 1);
// 	ft_putstr_fd("", 1);
// 	ft_putstr_fd(" monde\n", 1);
// 	ft_putstr_fd("erreur\n", 2);
// 	printf("fin\n");
// 	return (0);
// }