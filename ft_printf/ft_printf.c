/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 07:53:33 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 13:13:25 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_sortcase(va_list args, char *input, size_t *size)
{
	if (*input == 'c')
		ft_printout_char(va_arg(args, int), size);
	else if (*input == 's')
		ft_printout_str(va_arg(args, char *), size);
	else if (*input == 'p')
		ft_printout_ptr(va_arg(args, void *), size);
	else if (*input == 'u')
		ft_printout_uint(va_arg(args, unsigned int), size);
	else if (*input == 'i' || *input == 'd')
		ft_printout_int(va_arg(args, int), size);
	else if (*input == 'x' || *input == 'X')
	{
		if (*input == 'x')
			ft_printout_hex(va_arg(args, unsigned int), size, HEX_LOW);
		else
			ft_printout_hex(va_arg(args, unsigned int), size, HEX_UP);
	}
	else if (*input == '%')
		ft_printout_char(*input, size);
}

int	ft_printf(char const *input, ...)
{
	va_list	args;
	size_t	size;

	if (!input)
		return (0);
	size = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			ft_sortcase(args, (char *)input, &size);
		}
		else
			ft_printout_char(*input, &size);
		input++;
	}
	va_end(args);
	return (size);
}

int	main(void)
{
	printf("hello world");
	ft_printf("hello world");

	return (0);
}
