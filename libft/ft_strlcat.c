/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 17:15:00 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:49:48 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	lendst = ft_strlen((const char *) dst);
	lensrc = ft_strlen((const char *) src);
	if (size <= lendst)
		return (lensrc + size);
	i = lendst;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lensrc + lendst);
}

// int	main(void)
// {
// 	char	dst[10] = "123";
// 	char	*src = "456";
// 	printf("%s\n", dst);
// 	ft_strlcat(dst, src, 1);
// 	printf("%s", dst);
// }
