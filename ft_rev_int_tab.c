/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 23:04:49 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/02 15:11:00 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i_left;
	int	i_right;
	int	value_left;
	int	nr_iterations;

	i_left = 0;
	i_right = size - 1;
	nr_iterations = size / 2;
	while (i_left < nr_iterations)
	{
		value_left = tab[i_left];
		tab[i_left] = tab[i_right];
		tab[i_right] = value_left;
		i_left++;
		i_right--;
	}
}
