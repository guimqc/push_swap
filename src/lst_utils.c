/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:13:56 by gvial             #+#    #+#             */
/*   Updated: 2022/07/16 21:13:57 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lstlast_ps(t_node *node)
{
	if (!node)
		return (node);
	while (node->next != NULL)
		node = node->next;
	return (node);
}

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

	if (head == NULL)
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
