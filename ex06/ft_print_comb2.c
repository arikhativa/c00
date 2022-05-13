/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:03:14 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/13 15:27:33 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char n)
{
	char digit1;
	char digit2;

	digit1 = n % 10;
	digit2 = (n - digit1) / 10;

	digit1 += '0';
	digit2 += '0';

	write(1, &digit2, 1);
	write(1, &digit1, 1);
}

void	print_numbers(char a, char b)
{
	print(a);
	write(1, " ", 1);
	print(b);

	if ()
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			print_numbers(a, b);
			++b;
		}
		++a;
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}