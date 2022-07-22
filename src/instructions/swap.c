/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:58:22 by gvial             #+#    #+#             */
/*   Updated: 2022/07/20 13:58:24 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	swap(t_node **head)
{
	t_node	*new_head;

	if (*head == NULL)
		return ;
	if ((*head)->next == NULL)
		return ;
	new_head = (*head)->next;
	(*head)->next = (*head)->next->next;
	new_head->next = *head;
	*head = new_head;
}

void	sa(t_node **head_a)
{
	swap(head_a);
	write(1, "sa\n", 3);
}

void	sb(t_node **head_b)
{
	swap(head_b);
	write(1, "sb\n", 3);
}

void	ss(t_node **head_a, t_node **head_b)
{
	swap(head_a);
	swap(head_b);
	write(1, "ss\n", 3);
}
