/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 14:47:13 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:31 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*u1;
	size_t			i;

	i = 0;
	u1 = (unsigned char *) s;
	while (i < n)
	{
		if (u1[i] == (unsigned char) c)
			return (((void *) & u1[i]));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	buf[] = "Hello World";
// 	char	buf2[] = "abc\0def";
// 	/* Test 1 : caractère présent */

// 	printf("== 'o' dans \"Hello World\" ==\n");
// 	printf("std  : %p\n", memchr(buf, 'o', 11));
// 	printf("moin : %p\n", ft_memchr(buf, 'o', 11));
// 	/* Test 2 : caractère absent */
// 	printf("\n== 'z' dans \"Hello World\" ==\n");
// 	printf("std  : %p\n", memchr(buf, 'z', 11));
// 	printf("moin : %p\n", ft_memchr(buf, 'z', 11));
// 	/* Test 3 : chercher le \0 (beyond strlen) */
// 	printf("\n== '\\0' dans \"abc\\0def\" (n=7) ==\n");
// 	printf("std  : %p (index %ld)\n",
// 		memchr(buf2, '\0', 7),
// 	(long)((char *) memchr(buf2, '\0', 7) - buf2));
// 	printf("moin : %p (index %ld)\n",
// 		ft_memchr(buf2, '\0', 7),
// 	(long)((char *) ft_memchr(buf2, '\0', 7) - buf2));
// 	/* Test 4 : n = 0 */
// 	printf("\n== n=0 ==\n");
// 	printf("std  : %p\n", memchr(buf, 'H', 0));
// 	printf("moin : %p\n", ft_memchr(buf, 'H', 0));
// 	/* Test 5 : octet > 127 (sign extension) */
// 	printf("\n== 0xFF ==\n");
// 	{
// 		char	buf3[] =
// 		{
// 			(char) 0xFF, 'a', 'b'
// 		};
// 		printf("std  : %p\n", memchr(buf3, 0xFF, 3));
// 		printf("moin : %p\n", ft_memchr(buf3, 0xFF, 3));
// 	}
// 	return (0);
// }
