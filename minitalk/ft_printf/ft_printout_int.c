/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printout_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:49 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 11:57:05 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printout_int(int num, size_t *size)
{
	if (num == -214783648)
	{
		ft_printout_int((num / 10), size);
		ft_printout_char('8', size);
	}
	else if (num < 0)
	{
		ft_printout_char('-', size);
		ft_printout_int(-num, size);
	}
	else
	{
		if (num > 9)
			ft_printout_int((num / 10), size);
		ft_printout_char(('0' + num % 10), size);
	}
}
