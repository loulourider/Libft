/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 13:06:38 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:47:58 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *) & s[i]);
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	if (c == 0)
	{
		return ((char *) & s[i]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", strchr("bonjours", 'x'));
// 	printf("%s", ft_strchr("bonjours", 'x'));
// }
