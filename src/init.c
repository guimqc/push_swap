/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:45:27 by gvial             #+#    #+#             */
/*   Updated: 2022/07/14 21:45:29 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_duplicate(t_node *head_a, int argc)
{
	int	*map;

	map = ft_calloc(argc, sizeof(int));
	while (head_a)
	{
		if (map[head_a->value] == 1)
		{
			free(map);
			return (1);
		}
		else
			map[head_a->value] = 1;
		head_a = head_a->next;
	}
	free(map);
	return (0);
}

void	init_stacks(t_node **head_a, t_node **head_b, char **argv, int argc)
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
	if (is_duplicate(*head_a, argc))
		error(*head_a, *head_b);
}