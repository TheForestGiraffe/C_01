/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:21:40 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/02 15:33:04 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	reminder;

	if (b != 0)
	{
		result = *a / *b;
		reminder = *a % *b;
		*a = result;
		*b = reminder;
	}
}
