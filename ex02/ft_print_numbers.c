/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:51:38 by sallow            #+#    #+#             */
/*   Updated: 2020/06/24 10:18:50 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)

void ft_print_numbers(void)
{
	char numbers;
	numbers = '0';

	while(numbers <= '9')
	{
		ft_putchar(numbers);
		ft_putchar(',');
		numbers++;
	}
}
		







