/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:18:34 by pmartins          #+#    #+#             */
/*   Updated: 2019/10/21 11:30:55 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long a;

	a = nb;
	if (a < 0)
	{
		write(1, "-", 1);
		a = a * -1;
	}
	if (a / 10 > 0)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar(a % 10 + '0');
}
