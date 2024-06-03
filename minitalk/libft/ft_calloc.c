/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:33:32 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/27 20:34:30 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*output;
	size_t	totalsize;

	totalsize = nmeb * size;
	if (nmeb != 0 && size != 0 && totalsize / nmeb != size)
		return (NULL);
	output = malloc(totalsize);
	if (output != NULL)
		ft_memset(output, 0, totalsize);
	return (output);
}
