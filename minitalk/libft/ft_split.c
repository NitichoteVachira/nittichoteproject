/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:40:55 by nivachir          #+#    #+#             */
/*   Updated: 2023/10/01 15:13:15 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_word(char const *s, char c, size_t *index)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*word;

	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] != c && s[*index])
		(*index)++;
	end = (*index);
	word = (char *)malloc(end - start + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_mem(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	count;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	count = word_count(s, c);
	output = (char **)malloc((count + 1) * sizeof(char *));
	if (output == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		output[i] = get_word(s, c, &j);
		if (output[i] == NULL)
		{
			free_mem(output, i);
			return (NULL);
		}
		i++;
	}
	output[i] = NULL;
	return (output);
}
