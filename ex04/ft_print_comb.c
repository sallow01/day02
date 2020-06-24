/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:35:35 by sallow            #+#    #+#             */
/*   Updated: 2020/06/24 10:45:35 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_putchar(char c)
{
	write(1,&c, 1);
}

void  ft_print_comb(void)
{
	char i;
	char j;
	char k;
	i = '0';

	
	while (i <= '7')

	{
		j = i + 1;
		while (j <= '8')
		{
			k = i + 1;
			while(k <= '9')
			{
			 ft_putchar(i);
		     ft_putchar(j);
			 ft_putchar(k);
			 ft_putchar(',');
			 ft_putchar(',');
		     k = k + 1;	 
			}
			j = j + 1;
		  }
		  i = i + 1;
	}

}

int main()
{
	ft_print_comb();
	return 0;
}
