/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:48:44 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/08 23:20:53 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long i;
	long nb1;

	nb1 = nb;
	if (nb1 == 0)
		return (0);
	if (nb1 == 1)
		return (0);
	i = 2;
	while (i * i <= nb1)
	{
		if (nb1 % i == 0)
			return (0);
		i++;
	}
	return (1);
}