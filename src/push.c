/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:34:53 by gvial             #+#    #+#             */
/*   Updated: 2022/07/20 14:34:54 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_node **from, t_node **to)
{
	t_node	*tmp;

	if (*from == NULL)
		return ;
	tmp = *from;
	*from = (*from)->next;
	if (*to == NULL)
	{
		*to = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *to;
		*to = tmp;
	}
}

void	pa(t_node **head_a, t_node **head_b)
{
	push(head_b, head_a);
	write(1, "pb\n", 3);
}

void	pb(t_node **head_a, t_node **head_b)
{
	push(head_a, head_b);
	write(1, "pa\n", 3);
}
