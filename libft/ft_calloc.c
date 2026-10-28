/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 16:08:12 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:44:59 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	*tab;
// 	int	i;
// 	tab = ft_calloc(50, sizeof(int));
// 	if (!tab)
// 	{
// 		printf("NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 50)
// 	{
// 		printf("tab[%d] = %d\n", i, tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }
