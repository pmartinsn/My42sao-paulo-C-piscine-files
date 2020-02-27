/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:20:57 by pmartins          #+#    #+#             */
/*   Updated: 2019/10/23 20:53:50 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (1 < power)
	{
		x = nb * x;
		power--;
	}
	return (x);
}
