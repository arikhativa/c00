/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:03:14 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/13 13:28:24 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (1)
	{
		print(a, b, c);
		if (++c == ':')
		{
			++b;
			c = b + 1;
			if (b == '9')
			{
				++a;
				b = a + 1;
				c = b + 1;
				if (a == '8')
					break ;
			}
		}
		write(1, ", ", 2);
	}
}
