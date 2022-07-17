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
