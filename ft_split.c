/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:29:03 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/30 00:14:17 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	how_many_words(char const *s, char c, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (s[i] == c || (s[i] != c && s[i - 1] != c && i != 0))
			i++;
		else if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			i++;
			j++;
		}
	}
	return (j);
}

char	**create_tabs(char **tab, char const *str, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < len)
	{
		if (str[i] != c)
		{
			j = 0;
			while (str[i] != c && i < len)
			{
				i++;
				j++;
			}
			tab[k] = malloc(sizeof(char) * j + 1);
			k++;
		}
		i++;
	}
	return (tab);
}

char	**fill_tab(char **tab, char const *s, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < len)
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && i < len)
			{
				tab[k][j] = s[i];
				i++;
				j++;
			}
			k++;
		}
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	words = how_many_words(s, c, len);
	tab = malloc(sizeof (char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab = create_tabs(tab, s, c, len);
	if (!tab)
		return (NULL);
	tab = fill_tab(tab, s, c, len);
	tab[words] = NULL;
	return (tab);
}
