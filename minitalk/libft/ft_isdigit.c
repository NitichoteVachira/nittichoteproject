/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:01:05 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:19 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
		int input = '3';

		int output = isdigit(input);
		int output_ft = ft_isdigit(input);
		printf("output = %d\n",output);
		printf("output_ft = %d\n",output_ft);
		return (0);
}*/
