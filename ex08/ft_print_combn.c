/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:29:34 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/15 18:22:29 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int	stop(int arr[9], int n)
{
	// printf("arr[0] - %d\n", arr[0]);
	// printf("n - %d\n", n);
	return (arr[0] == 11 - n);
}

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

void	increment(int arr[9], int n, int lim)
{
	++arr[n - 1];
	if (n > 1 && arr[n - 1] == lim)
	{
		increment(arr, n - 1, lim - 1);
		arr[n - 1] = arr[n - 2] + 1;
	}
}

void	increment_and_print(int arr[9], int n)
{
	while (!stop(arr, n))
	{
		print_number(arr, n);
		increment(arr, n, 10);
		if (!stop(arr, n))
			write(1, ", ", 2);
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
	increment_and_print(arr, n);
}

int	main()
{
	ft_print_combn(4);
	printf("\n");
	// ft_print_combn(8);
	printf("\n");
	// ft_print_combn(9);
	printf("\n");
}