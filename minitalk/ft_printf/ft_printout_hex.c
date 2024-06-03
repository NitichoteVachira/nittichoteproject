/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printout_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:18:07 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 12:21:19 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printout_hex(unsigned int num, size_t *size, char *base_num)
{
	char	*output;

	output = ft_sidefunc(num, base_num);
	ft_printout_str(output, size);
	free(output);
}
