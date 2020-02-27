/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:41:03 by pmartins          #+#    #+#             */
/*   Updated: 2019/10/23 21:01:19 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int x;

	x = nb;
	if (power == 0)
		return (1);
	if (power < 0 || x < 0)
		return (0);
	else if (power > 1)
		x = x * ft_recursive_power(x, power - 1);
	return (x);
}
