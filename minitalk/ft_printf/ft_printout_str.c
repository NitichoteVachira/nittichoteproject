/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printout_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:05:11 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/06 10:09:57 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printout_str(char *input, size_t *size)
{
	if (!input)
		input = "(null)";
	while (*input)
	{
		ft_printout_char(*input, size);
		input++;
	}
}
