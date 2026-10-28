/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 10:26:50 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:26 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}

// int	main(void)
// {
// 	printf("egal       : %d | %d\n", ft_strncmp("abc", "abc", 3),
// 		strncmp("abc", "abc", 3));
// 	printf("abc < abd  : %d | %d\n", ft_strncmp("abc", "abd", 3),
// 		strncmp("abc", "abd", 3));
// 	printf("abd > abc  : %d | %d\n", ft_strncmp("abd", "abc", 3),
// 		strncmp("abd", "abc", 3));
// 	printf("n = 2      : %d | %d\n", ft_strncmp("abc", "abd", 2),
// 		strncmp("abc", "abd", 2));
// 	printf("n = 0      : %d | %d\n", ft_strncmp("abc", "xyz", 0),
// 		strncmp("abc", "xyz", 0));
// 	return (0);
// }