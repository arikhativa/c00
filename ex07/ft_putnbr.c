/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:19:32 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/15 12:28:26 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_digit(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		++c;
	}
	return (c);
}

int	power(int n, int p)
{
	int	tmp;

	tmp = n;
	if (p == 0)
		return (1);
	while (p > 1)
	{
		n *= tmp;
		--p;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int		p;
	char	ch;

	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	p = power(10, count_digit(nb) - 1);
	while (p)
	{
		ch = (nb / p) + '0';
		write(1, &ch, 1);
		nb %= p;
		p /= 10;
	}
}
