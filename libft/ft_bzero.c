/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 14:23:30 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:44:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	a[10];
// 	char	b[10];
// 	memset(a, 'X', sizeof(a));
// 	memset(b, 'X', sizeof(b));
// 	ft_bzero(a, 5);
// 	bzero(b, 5);
// 	if (memcmp(a, b, sizeof(a)) == 0)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");
// 	return (0);
// }