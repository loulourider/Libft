/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 13:35:27 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:34 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((const char *) s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *) & s[i]);
		}
		i--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	*s;

// 	s = "bonjour le monde";
// 	printf("derniere : %s | %s\n", ft_strrchr(s, 'o'), strrchr(s, 'o'));
// 	printf("premiere : %s | %s\n", ft_strrchr("bonjour", 'b'),
// 		strrchr("bonjour", 'b'));
// 	printf("fin \\0   : [%s] | [%s]\n", ft_strrchr("bonjour", '\0'),
// 		strrchr("bonjour", '\0'));
// 	printf("absent   : %p | %p\n", (void *) ft_strrchr("bonjour", 'z'),
// 		(void *) strrchr("bonjour", 'z'));
// 	return (0);
// }