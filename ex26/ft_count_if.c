/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:02:43 by egaliber          #+#    #+#             */
/*   Updated: 2021/11/01 12:34:02 by egaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (tab [a] != '\0')
	{
		if (f(tab[a]) == 1)
			b++;
		a++;
	}
	return (b);
}
