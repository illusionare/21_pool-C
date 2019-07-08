/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:56:10 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/10 23:51:25 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int plus;
	int num;

	plus = 1;
	num = 0;
	while ((*str == '\n') || (*str == '\t') || (*str == '\v') ||
						(*str == ' ') || (*str == '\f') || (*str == '\r'))
							str++;
	if (*str == '-')
	{
		plus = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 0)
			num = (num * 10) + (*str - '0');
		str++;
	}
	num = num * plus;
	return (num);
}