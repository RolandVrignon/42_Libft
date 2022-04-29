/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:40:59 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:40:59 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	x(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	how_many_str(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!x(str[0], charset))
		nb = nb + 1;
	while (str[i] != '\0')
	{
		if (x(str[i], charset) && !x(str[i + 1], charset)
			&& str[i + 1] != '\0')
			nb = nb + 1;
		i++;
	}
	return (nb + 1);
}

void	fill_tab(int *st, char *tab, char *str, char *charset)
{
	int	i;

	i = 0;
	if (str[st[1]] == '\0' && !x(str[st[1] - 1], charset))
	{	
		while (str[st[0]] != '\0')
		{
			tab[i] = str[st[0]];
			st[0]++;
			i++;
		}
	}
	else
	{
		while (st[0] < st[1] - 1)
		{
			tab[i] = str[st[0]];
			st[0]++;
			i++;
		}
	}
	tab[i] = '\0';
}

char	**process(int size, char **tab, char *s, char *ch)
{
	int	st[2];
	int	i;
	int	j;

	j = -1;
	i = -1;
	while (i++ < size - 2)
	{
		st[0] = -1;
		while (s[++j] != '\0')
		{
			if (!x(s[j], ch) && (x(s[j - 1], ch) || j == 0))
				st[0] = j;
			if ((x(s[j], ch) && !x(s[j - 1], ch) && st[0] != -1)
				|| (st[0] != -1 && s[j + 1] == '\0'))
				st[1] = j + 1;
			if (st[0] != -1 && st[1] > st[0])
			{
				tab[i] = malloc(sizeof(char) * ((st[1] - st[0])));
				fill_tab(st, tab[i], s, ch);
				break ;
			}
		}
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
    char	**tab;
    int		size;
    char	*ch;

    if (!s)
        return (NULL);
    ch = ft_strdup("");
    ch = ft_strjoin(ch, &c);
    size = how_many_str((char *)s, ch);
    tab = malloc(sizeof(char *) * (size + 2));
    if (!tab)
        return (NULL);
    tab = process(size, tab, (char *)s, ch);
    free(ch);
    return (tab);
}