/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:31:24 by gvial             #+#    #+#             */
/*   Updated: 2022/07/19 18:31:25 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node **head)
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

void	rotate_down(t_node **head)
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

void	rotate_up(t_node **head)
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

void	push(t_node **from, t_node **to)
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
