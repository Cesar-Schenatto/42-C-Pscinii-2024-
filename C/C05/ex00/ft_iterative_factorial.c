/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:47:48 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/22 18:15:15 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
	{
	int	c;

	c = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (c > 1)
	{
		nb = nb * c;
		c--;
	}
	return (nb);
}
/*int main (void)
{
	int i = -5;
	
	while (i < 12)
{
	printf("%d factorial is: %d\n", i , ft_iterative_factorial(i));
	++i;
}
	//printf("%i ", ft_iterative_factorial(5));
	return 0;
}*/
