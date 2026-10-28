/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 10:01:14 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:50 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
		return (dest);
	}
	else
	{
		while (n--)
		{
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
		}
		return (dest);
	}
}
// int	main(void)
// {
// 	char	a[] = "abcdefghij";
// 	char	b[] = "abcdefghij";
// 	ft_memmove(a + 2, a, 5);
// 	memmove(b + 2, b, 5);
// 	printf("vers la droite : %s | %s\n", a, b);
// 	ft_memmove(a, a + 2, 5);
// 	memmove(b, b + 2, 5);
// 	printf("vers la gauche : %s | %s\n", a, b);
// 	return (0);
// }