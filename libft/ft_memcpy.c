/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 17:44:56 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:46:39 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
// int	main(void)
// {
// 	char	src[] = "abcdefghij";
// 	char	dst[11];
// 	memset(dst, 'X', 10);
// 	dst[10] = '\0';
// 	ft_memcpy(dst, src, 5);
// 	printf("resultat : %s\n", dst);
// 	return (0);
// }