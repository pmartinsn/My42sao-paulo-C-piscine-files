/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:34:14 by pmartins          #+#    #+#             */
/*   Updated: 2019/10/14 15:33:06 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int div1;
	int mod1;

	div1 = a / b;
	mod1 = a % b;
	*div = div1;
	*mod = mod1;
}
