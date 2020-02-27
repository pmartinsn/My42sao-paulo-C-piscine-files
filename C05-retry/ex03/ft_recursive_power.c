/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:43:19 by pmartins          #+#    #+#             */
/*   Updated: 2019/10/24 16:43:27 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		result = (nb * ft_recursive_power(nb, power - 1));
		return (result);
	}
	else
	{
		return (1);
	}
}
