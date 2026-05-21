/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:06:29 by dilferre          #+#    #+#             */
/*   Updated: 2026/05/14 19:14:47 by dilferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	len;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	array = malloc (sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	while (i < len)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
