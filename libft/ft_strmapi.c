/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 09:23:35 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:22 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// static char	maj_si_pair(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*src;
// 	char	*res;

// 	src = "abcdef";
// 	res = ft_strmapi(src, maj_si_pair);
// 	printf("original : %s\n", src);
// 	printf("resultat : %s\n", res);
// 	free(res);
// 	res = ft_strmapi("", maj_si_pair);
// 	printf("vide     : [%s]\n", res);
// 	free(res);
// 	printf("NULL     : %p\n", (void *) ft_strmapi(NULL, maj_si_pair));
// 	return (0);
// }