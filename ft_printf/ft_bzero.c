/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:35:23 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 12:42:46 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *str, size_t len)
{
	size_t			count;
	unsigned char	*str_temp;

	count = 0;
	str_temp = (unsigned char *)str;
	while (count < len)
	{
		str_temp[count] = 0;
		count++;
	}
}
/*
int	main (void)
{
	char str1[50] = "this is america";
	char str2[50] = "this is america";
	size_t size = sizeof(str1);
	void *real = bzero(str1,3);
	void *copy = ft_bzero(str2,3);
	
	printf("real result is: ");
	for (size_t i = 0; i < size; ++i) 
	{
        	printf("%c", str1[i]);
	}
	printf("copy result is: ");
	for (size_t j = 0; j < size; ++j) 
	{
        	printf("%c", str2[j]);
	}
}*/
