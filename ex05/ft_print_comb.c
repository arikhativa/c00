/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:03:14 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/13 12:50:35 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int stop;
	char a;
	char b;
	char c;

	stop = 0;
	a = '0';
	b = '1';
	c = '2';

	while (stop++ < 200)
	{
		print(a, b, c);

		++c;
		
		if (c == ':')
		{
			++b;
			if (b == '9')
			{
				++a;
				b = a + 1;
				c = b + 1;
				if (a == '8')
				{
					break ;
				}
			} else {
				c = b + 1;
			}
		}
	}
}

int	main()
{
	ft_print_comb();
}