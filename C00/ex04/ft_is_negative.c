/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 19:33:01 by pmartins          #+#    #+#             */
/*   Updated: 2019/10/09 18:38:36 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	f;
	char	g;

	f = 'N';
	g = 'P';
	if (n < 0)
		write(1, &f, 1);
	else
		write(1, &g, 1);
}
