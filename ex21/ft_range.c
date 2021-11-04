/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:26:05 by egaliber          #+#    #+#             */
/*   Updated: 2021/11/01 13:20:58 by egaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*result;

	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(*result) * (max - min));
	a = 0;
	while (min < max)
	{
		result[a] = min;
		a++;
		min++;
	}
	return (result);
}
