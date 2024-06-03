/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 07:34:15 by nivachir          #+#    #+#             */
/*   Updated: 2024/05/03 10:30:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

bool	stack_sorted(t_stack_node *stack)
{
	if (NULL == stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static t_stack_node	*find_highest(t_stack_node *stack)
{
	int				highest;
	t_stack_node	*highest_node;

	if (NULL == stack)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highest_node = stack;
		}
		stack = stack->next;
	}
	return (highest_node);
}

void	sorting(t_stack_node **a)
{
    t_stack_node *highest_node = NULL;

    highest_node = find_highest(*a);
    if (highest_node != NULL) {
        if (*a == highest_node)
            ra(a, false);
        else if ((*a)->next == highest_node)
            rra(a, false);
        if ((*a)->value > (*a)->next->value)
            sa(a, false);
    }
}