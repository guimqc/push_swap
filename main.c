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

void	print_lst(t_node *head)
{
	while (head->next != NULL)
	{
		ft_printf("%i\n", head->value);
		head = head->next;
	}
	ft_printf("%i\n", head->value);
}

t_node	*init_stack_a(char **argv)
{
	int		i;
	t_node	*head;
	t_node	*new_node;
	t_node	*last_node;

	i = 1;
	head = malloc(sizeof(t_node) * 1);
	head->value = ft_atoi(argv[i]);
	while (argv[++i])
	{
		new_node = malloc(sizeof(t_node) * 1);
		new_node->value = ft_atoi(argv[i]);
		new_node->next = NULL;
		last_node = ft_lstlast_ps(head);
		last_node->next = new_node;
	}
	return (head);
}

int	main(int argc, char *argv[])
{
	t_node	*head_a;
	t_node	*head_b;

	if (argc < 2)
		ft_printf("push_swap needs a list of integer as arguments\nleaks");
	head_a = init_stack_a(argv);
	print_lst(head_a);
}