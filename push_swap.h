/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:45:11 by gvial             #+#    #+#             */
/*   Updated: 2022/07/14 21:45:12 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

//init
void	init_stacks(t_node **head_a, t_node **head_b, char **argv, int argc);

// solve
void	solve3(t_node **head_a);

// instructions
void	sa(t_node **head_a);
void	sb(t_node **head_b);
void	ss(t_node **head_a, t_node **head_b);
void	ra(t_node **head_a);
void	rb(t_node **head_b);
void	rr(t_node **head_a, t_node **head_b);
void	rra(t_node **head_a);
void	rrb(t_node **head_b);
void	rrr(t_node **head_a, t_node **head_b);
void	pa(t_node **head_a, t_node **head_b);
void	pb(t_node **head_a, t_node **head_b);

// lst_utils
void	free_lst(t_node *head);
void	print_lst(t_node *head);
int		is_sorted(t_node *head);
t_node	*ft_lstlast_ps(t_node *node);

#endif