/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:11:14 by solympe           #+#    #+#             */
/*   Updated: 2019/09/14 12:37:45 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freee(char **s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char	*return_word(const char *s, int ai, char c)
{
	char	*word;
	int		n;
	int		j;

	j = 0;
	n = ai;
	while (s[n] != c && s[n])
		n++;
	word = ft_strnew(n - ai);
	if (!word)
		return (NULL);
	while (ai < n && s[ai])
	{
		word[j] = s[ai];
		j++;
		ai++;
	}
	return (word);
}

static char	**make_array(const char *s, char c, int num, int ai)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * num + 1);
	if (!arr)
		return (NULL);
	while (s[ai] && num != 0)
	{
		if ((s[ai] != c && s[ai - 1] == c) || (s[ai] != c && ai == 0))
		{
			arr[i] = return_word(s, ai, c);
			if (!arr[i])
			{
				freee(arr);
				return (NULL);
			}
			ai++;
			num--;
			i++;
		}
		ai++;
	}
	arr[i] = 0x00;
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		num;
	int		ai;

	if (!s)
		return (NULL);
	if (!c)
	{
		arr = (char **)malloc(sizeof(char *));
		arr[0] = ft_strnew(ft_strlen(s));
		arr[0] = (char *)s;
		return (arr);
	}
	ai = 0;
	i = 0;
	num = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			num++;
		i++;
	}
	arr = make_array(s, c, num, ai);
	return (arr);
}