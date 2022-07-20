/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:45:27 by gvial             #+#    #+#             */
/*   Updated: 2022/07/14 21:45:29 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int argc, char *argv[])
{
	t_node	*head_a;
	t_node	*head_b;

	if (argc < 2)
	{
		ft_printf("push_swap needs a list of integer as arguments\n");
		return (42);
	}
	init_stacks(&head_a, &head_b, argv);
	ft_printf("initial stack a:\n");
	print_lst(head_a);

	free_lst(head_a);
	free_lst(head_b);
}
