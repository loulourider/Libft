/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 11:06:05 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*u1;
	const unsigned char	*u2;
	size_t				i;

	i = 0;
	u1 = (unsigned char *) s1;
	u2 = (unsigned char *) s2;
	while (i < n)
	{
		if (u1[i] != u2[i])
		{
			return (u1[i] - u2[i]);
		}
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	printf("egal      : %d | %d\n", ft_memcmp("abc", "abc", 3),
// 		memcmp("abc", "abc", 3));
// 	printf("abc < abd : %d | %d\n", ft_memcmp("abc", "abd", 3),
// 		memcmp("abc", "abd", 3));
// 	printf("abd > abc : %d | %d\n", ft_memcmp("abd", "abc", 3),
// 		memcmp("abd", "abc", 3));
// 	printf("n = 0     : %d | %d\n", ft_memcmp("abc", "xyz", 0),
// 		memcmp("abc", "xyz", 0));
// 	return (0);
// }