/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printout_uint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:41:07 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 11:06:14 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printout_uint(unsigned int num, size_t *size)
{
	char	*output;

	output = ft_sidefunc(num, "0123456789");
	ft_printout_str(output, size);
	free(output);
}
