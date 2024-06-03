/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:29:30 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 12:40:22 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	*ft_memset(void *dest, int src, size_t len)
{
	size_t	count;
	char	*desti;
	void	*destii;

	desti = (char *)dest;
	count = 0;
	while (count < len)
	{
		desti[count] = src;
		count++;
	}
	destii = (void *)desti;
	return (destii);
}
/*
int	main(void)
{
	char	dest[50] = "this is america";
	char	src = '$';
	int	len = 4;
	printf("normal output is: %s\n",dest);
	char	*output1 = ft_memset(dest,src,len);
	char	*output2 = memset(dest,src,len);
	printf("output2 is: %s\n",output2);
	printf("output1 is: %s\n",output1);
	//printf("output2 is: %s\n",output2);
	return (0);	
}*/
