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

	pb(&head_a, &head_b);
	pb(&head_a, &head_b);
	pb(&head_a, &head_b);
	ft_printf("stack a:\n");
	print_lst(head_a);
	ft_printf("stack b:\n");
	print_lst(head_b);

	free_lst(head_a);
	free_lst(head_b);
}
