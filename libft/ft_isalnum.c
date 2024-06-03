/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:17:24 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/18 17:27:32 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	input	= '/';
	int	output	= isalnum(input);
	int	output_ft	= ft_isalnum(input);

	printf("output = %d\n",output);
	printf("output_ft = %d\n",output_ft);
	return (0);
}*/
