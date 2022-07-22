/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:58:37 by gvial             #+#    #+#             */
/*   Updated: 2022/07/20 13:58:38 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate(t_node **head)
{
	t_node	*new_head;
	t_node	*last_node;

	if (head == NULL)
		return ;
	if ((*head)->next == NULL)
		return ;
	new_head = (*head)->next;
	last_node = ft_lstlast_ps(*head);
	last_node->next = *head;
	(*head)->next = NULL;
	*head = new_head;
}

void	ra(t_node **head_a)
{
	rotate(head_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **head_b)
{
	rotate(head_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **head_a, t_node **head_b)
{
	rotate(head_a);
	rotate(head_b);
	write(1, "rr\n", 3);
}
