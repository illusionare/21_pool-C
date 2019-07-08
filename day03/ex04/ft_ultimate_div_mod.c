/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 04:13:49 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/07 04:18:09 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dv;
	int	md;

	dv = (*a) / (*b);
	md = (*a) % (*b);
	*a = dv;
	*b = md;
}
