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

static void	error(void)
{
	ft_printf("Error\n");
	exit(0);
}

static int	verify_args_are_ints(char **argv, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (argv[++i])
	{
		while (argv[i][++j])
			if (!ft_isdigit(argv[i][j]))
				return (0);
		j = -1;
	}
	return (1);
}

static int	check_duplicate_args(char **argv, int argc)
{
	int	i;
	int	value;
	int	*map;

	map = ft_calloc(argc, sizeof(int));
	i = 0;
	while (argv[++i])
	{
		value = ft_atoi(argv[i]);
		if (map[value] == 1)
		{
			free(map);
			return (0);
		}
		map[value] = 1;
	}
	free(map);
	return (1);
}

void	init_stacks(t_node **head_a, t_node **head_b, char **argv, int argc)
{
	int		i;
	t_node	*new_node;
	t_node	*last_node;

	i = 1;
	if (!check_duplicate_args(argv, argc))
		error();
	if (!verify_args_are_ints(argv, argc))
		error();
	*head_a = ft_calloc(1, sizeof(t_node));
	(*head_a)->value = ft_atoi(argv[i]);
	(*head_a)->next = NULL;
	while (argv[++i])
	{
		new_node = ft_calloc(1, sizeof(t_node));
		new_node->value = ft_atoi(argv[i]);
		new_node->next = NULL;
		last_node = ft_lstlast_ps(*head_a);
		last_node->next = new_node;
	}
	*head_b = NULL;
}
