/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 14:08:52 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:30 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needlen;

	i = 0;
	j = 0;
	needlen = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *) haystack);
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	while (haystack[i] != '\0' && i + needlen <= len)
	{
		j = 0;
		while (j < needlen && haystack[i + j] == needle[j])
			j++;
		if (j == needlen)
			return ((char *) & haystack[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	printf("%s", ft_strnstr("bonjours tout le mondes !!!", "le", 27));
// }
