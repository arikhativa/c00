/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:29:34 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/15 16:20:03 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	print_number(int arr[9], int n)
{
	int		i;
	char	ch;

	i = 0;
	while (i < n)
	{
		ch = arr[i] + '0';
		write(1, &ch, 1);
		++i;
	}
}

void	increment(int arr[9], int n)
{
	++arr[n - 1];
	if (arr[n - 1] == 10 && arr[0] < 11 - n )
	{
		increment(arr, n - 1);
		arr[n - 1] = arr[n - 2] + 1;
	}
}

void	increment_and_print(int arr[9], int n)
{
	while (arr[0] < 11 - n)
	{
		write(1, ", ", 2);
		increment(arr, n);
		print_number(arr, n);
	}
}

void ft_print_combn(int n)
{
	int arr[9];
	int	i;

	i = 0;
	
	while (i < 9)
	{
		arr[i] = i;
		++i;
	}

	print_number(arr, n);

	increment_and_print(arr, n);
}

int	main()
{
	ft_print_combn(2);
	printf("\n");
	// ft_print_combn(8);
	printf("\n");
	// ft_print_combn(9);
	printf("\n");
}