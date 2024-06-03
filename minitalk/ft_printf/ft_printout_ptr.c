/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printout_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:12:05 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 11:15:32 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printout_ptr(void *ptr, size_t *size)
{
	char			*temp;
	unsigned long	ptr_location;

	ptr_location = (unsigned long)ptr;
	ft_printout_str("0x", size);
	temp = ft_sidefunc(ptr_location, HEX_LOW);
	ft_printout_str(temp, size);
	free(temp);
}
