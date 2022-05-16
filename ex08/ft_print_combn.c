/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:29:34 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/16 10:29:15 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define INCREMENT_LIM 10

void	print_arr(int arr[9], int n)
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

void	ft_print_combn(int n)
{
	int	arr[9];
	int	i;

	i = 0;
	while (i < 9)
	{
		arr[i] = i;
		++i;
	}
	print_arr(arr, n);
	increment(arr, n, INCREMENT_LIM);
	while (arr[0] != 11 - n)
	{
		write(1, ", ", 2);
		print_arr(arr, n);
		increment(arr, n, INCREMENT_LIM);
	}
}
