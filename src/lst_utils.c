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

void	init_stacks(t_node **head_a, t_node **head_b, char **argv)
{
	int		i;
	t_node	*new_node;
	t_node	*last_node;

	i = 1;
	*head_a = malloc(sizeof(t_node) * 1);
	(*head_a)->value = ft_atoi(argv[i]);
	(*head_a)->next = NULL;
	while (argv[++i])
	{
		new_node = malloc(sizeof(t_node) * 1);
		new_node->value = ft_atoi(argv[i]);
		new_node->next = NULL;
		last_node = ft_lstlast_ps(*head_a);
		last_node->next = new_node;
	}
	*head_b = NULL;
}

t_node	*ft_lstlast_ps(t_node *node)
{
	if (!node)
		return (node);
	while (node->next != NULL)
		node = node->next;
	return (node);
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
