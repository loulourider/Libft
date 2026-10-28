/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 15:14:44 by username         #+#    #+#              */
/*   Updated: 2026/10/26 16:47:54 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	free_all(char **tab, int n)
{
	while (n > 0)
		free(tab[--n]);
	free(tab);
}

static int	count_w(const char *str, const char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	if (str[i] != c)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c)
		{
			count = count + 1;
		}
		i++;
	}
	if (str[i - 1] == c)
	{
		count--;
	}
	return (count);
}

static char	*new_word(const char *str, int start, int len)
{
	char	*word;
	int		j;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = str[start + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static char	*mot_i(const char *str, const char c, int i)
{
	int	j;
	int	start;
	int	len;

	j = 0;
	while (i > 0)
	{
		while (str[j] == c)
			j++;
		while (str[j] != '\0' && str[j] != c)
			j++;
		i--;
	}
	while (str[j] == c)
		j++;
	start = j;
	while (str[j] && str[j] != c)
		j++;
	len = j - start;
	return (new_word(str, start, len));
}

char	**ft_split(const char *str, const char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (count_w(str, c) + 1));
	if (!tab)
		return (NULL);
	while (i != count_w(str, c))
	{
		tab[i] = mot_i(str, c, i);
		if (!tab[i])
		{
			free_all(tab, i);
			return (NULL);
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	int		i;
// 	char	**tab;
// 	i = 0;
// 	tab = ft_split("  abc def hrh;eg ", ' ');
// 	while (tab[i] != NULL)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }