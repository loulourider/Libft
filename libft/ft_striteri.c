/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 09:23:12 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:48:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// static void	maj_si_pair(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }
// int	main(void)
// {
// 	char	s[] = "abcdef";
// 	char	vide[] = "";
// 	ft_striteri(s, maj_si_pair);
// 	printf("resultat : %s\n", s);
// 	ft_striteri(vide, maj_si_pair);
// 	printf("vide     : [%s]\n", vide);
// 	ft_striteri(NULL, maj_si_pair);
// 	ft_striteri(s, NULL);
// 	return (0);
// }