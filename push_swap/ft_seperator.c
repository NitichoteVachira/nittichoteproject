/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seperator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 03:30:40 by nivachir          #+#    #+#             */
/*   Updated: 2024/05/03 10:34:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>

static int	count_input(char *str, char space)
{
	int		count;
	bool	ifinset;

	count = 0;
	while (*str)
	{
		ifinset = false;
		while (*str == space && *str)
			++str;
		while (*str != space && *str)
		{
			if (!ifinset)
			{
				++count;
				ifinset = true;
			}
			++str;
		}
	}
	return (count);
}


static char	*get_next_set(char *str, char space)
{
	static int	inpos = 0;
	char		*next_str;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[inpos] == space)
		++inpos;
	while ((str[inpos + len] != space) && str[inpos + len])
		++len;
	next_str = malloc((size_t)(len + 1) * sizeof(char));
	if (NULL == next_str)
		return (NULL);
	while ((str[inpos] != space) && str[inpos])
		next_str[i++] = str[inpos++];
	next_str[i] = '\0';
	return (next_str);
}

char	**ft_seperate(char *str, char space)
{
	int		isset;
	char	**string_init;
	int		i;

	i = 0;
	isset = count_input(str, space);
	if (!isset)
		exit(1);
	string_init= malloc(sizeof(char *) * (size_t)(isset + 2));
	if (NULL == string_init)
		return (NULL);
	while (isset-- >= 0)
	{
		if (0 == i)
		{
			string_init[i] = malloc(sizeof(char));
			if (NULL == string_init[i])
				return (NULL);
			string_init[i++][0] = '\0';
			continue ;
		}
		string_init[i++] = get_next_set(str, space);
	}
	string_init[i] = '\0';
	return (string_init);
}
