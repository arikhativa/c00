/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:03:14 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/13 15:01:34 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (1) //08 99, 09 0:,
	{
		print(a, b, c, d);

		++d;

		if (d == ':')
		{
			++c;
			d = '0';
			if (c == ':')
			{
				++b;
				c = '0';
				d = b + 1;

				if (b == ':')
				{
					++a;
					b = '0';
				}
			}
		}
		if (a == ':')
			break ;
		write(1, ", ", 2);
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}