/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 08:04:17 by dilferre          #+#    #+#             */
/*   Updated: 2026/05/13 09:39:19 by dilferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	v;
	int	accum;

	v = 1;
	accum = 1;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	while (v <= nb)
	{
		accum = accum * v;
			v++;
	}
	return (accum);
}
