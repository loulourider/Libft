/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 15:58:37 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:47:38 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = (unsigned char)(c);
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	buffer[10];

// 	ft_memset(buffer, '1', 5);
// 	printf("%s", buffer);
// }
