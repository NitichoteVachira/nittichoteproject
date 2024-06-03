/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:34:31 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/22 12:37:02 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	output;
	int		i;
	int		minus;

	output = 0;
	i = 0;
	minus = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		output = (output * 10) + (nptr[i] - '0');
		i++;
	}
	output *= minus;
	return ((int)output);
}
/*
int	main(void)
{
	char *input = "945";

	int output = atoi(input);
	int	ft_output = ft_atoi(input);

	if (output == ft_output)
		printf("pas\n");
	else
		printf("failed\n");
	printf("output: %d\n",output);
	printf("ft_output: %d\n",ft_output);
	return(0);
}*/
