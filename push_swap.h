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
# include <stdio.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

// lst_utils
void	free_lst(t_node *head);
void	print_lst(t_node *head);
t_node	*ft_lstlast_ps(t_node *node);

// movement
void	push(t_node **from, t_node **to);
void	rotate_down(t_node **head);
void	rotate_up(t_node **head);
void	swap(t_node **head);

#endif