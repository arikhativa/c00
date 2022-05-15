/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:29:34 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/15 15:06:12 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

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

void	print_number(int nb, int len)
{
	char	ch;
	int		p;

	while (len)
	{
		p = power(10, len - 1);
		ch = (nb / p) + '0';
		write(1, &ch, 1);
		--len;
		nb %= p;
	}
}

void ft_print_combn(int n)
{
	int lim;
	int number;

	lim = power(10, n);
	number = 0;
	while (number < lim)
	{
		print_number(number, n);
		if (number != (power(10, n) - 1))
			write(1, ", ", 2);
		++number;
	}
}

int	main()
{
	ft_print_combn(3);
}