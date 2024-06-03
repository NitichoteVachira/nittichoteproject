/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:31:32 by nivachir          #+#    #+#             */
/*   Updated: 2024/05/07 12:33:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	isempty(char *str)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] >= '0' && str[i] <= '9'
			&& str[i] == '+' && str[i] == '-')
			j++;
	}
	i = 0;
	while (j <= 12 && str[i])
	{
		if (str[i] != ' ')
			return (false);
		i++;
	}
	write(2, "Error\n", 6);
	return (true);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (1 == argc || (2 == argc && isempty(argv[1])))
		return (1);
	else
		argv = ft_seperator(argv[1], 32);
	stack_con(&a, argv + 1, 2 == argc);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sorting(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(&a);
}
