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

void	error(t_node *head_a, t_node *head_b)
{
	ft_printf("Error\n");
	free_lst(head_a);
	free_lst(head_b);
	exit(0);
}

int	main(int argc, char *argv[])
{
	t_node	*head_a;
	t_node	*head_b;

	if (argc < 2)
		return (42);
	init_stacks(&head_a, &head_b, argv, argc);
	print_lst(head_a);
	if (argc == 4)
		solve3(&head_a, &head_b);
	free_lst(head_a);
	free_lst(head_b);
}
