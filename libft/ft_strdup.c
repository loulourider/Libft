/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 15:43:56 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:01 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc((ft_strlen((const char *) s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
// int	main(void)
// {
// 	char	*src;
// 	char	*copie;
// 	src = "coucou";
// 	copie = ft_strdup(src);
// 	printf("copie     : %s\n", copie);
// 	copie[0] = 'X';
// 	printf("original  : %s\n", src);
// 	free(copie);
// 	copie = ft_strdup("");
// 	printf("vide      : [%s]\n", copie);
// 	free(copie);
// 	return (0);
// }