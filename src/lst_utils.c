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

int	is_sorted(t_node *head)
{
	while (head->next != NULL)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	print_lst(t_node *head)
{
	if (head == NULL)
		return ;
	while (head->next != NULL)
	{
		ft_printf("%i\n", head->value);
		head = head->next;
	}
	ft_printf("%i\n", head->value);
}

void	free_lst(t_node *head)
{
	t_node	*tmp;

	if (head == NULL)
		return ;
	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
