/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:41:59 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/30 10:38:57 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findlen(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, str, i);
		ft_putnbr(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*output;
	int		i;
	long	nbr;

	nbr = n;
	output = malloc(sizeof(char) * (ft_findlen(nbr) + 1));
	if (!output)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		output[i++] = '-';
		nbr *= -1;
	}
	ft_putnbr(nbr, output, &i);
	output[i] = '\0';
	return (output);
}
