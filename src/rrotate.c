/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:25:17 by gvial             #+#    #+#             */
/*   Updated: 2022/07/20 14:25:18 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rrotate(t_node **head)
{
	t_node	*new_head;
	t_node	*new_last;

	if (*head == NULL)
		return ;
	if ((*head)->next == NULL)
		return ;
	new_head = ft_lstlast_ps(*head);
	new_last = *head;
	while (new_last->next->next != NULL)
		new_last = new_last->next;
	new_last->next = NULL;
	new_head->next = *head;
	*head = new_head;
}

void	rra(t_node **head_a)
{
	rrotate(head_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **head_b)
{
	rrotate(head_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **head_a, t_node **head_b)
{
	rrotate(head_a);
	rrotate(head_b);
	write(1, "rrr\n", 4);
}
