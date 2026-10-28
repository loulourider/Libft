/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 13:48:01 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:14 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	i;

	i = 0;
	lensrc = ft_strlen((const char *) src);
	if (size == 0)
		return (lensrc);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
// int	main(void)
// {
// 	char	dst[10];
// 	size_t	ret;
// 	ret = ft_strlcpy(dst, "coucou", 10);
// 	printf("rentre   : [%s] retour = %zu\n", dst, ret);
// 	ret = ft_strlcpy(dst, "coucou", 4);
// 	printf("tronque  : [%s] retour = %zu\n", dst, ret);
// 	memset(dst, 'X', 9);
// 	dst[9] = '\0';
// 	ret = ft_strlcpy(dst, "coucou", 0);
// 	printf("size = 0 : [%s] retour = %zu\n", dst, ret);
// 	return (0);
// }