/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 02:27:27 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/14 02:29:56 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int t1;
	int t2;
	int t3;

	t1 = *b;
	t2 = *******c;
	t3 = ****d;
	*******c = ***a;
	****d = t2;
	*b = t3;
	***a = t1;
}