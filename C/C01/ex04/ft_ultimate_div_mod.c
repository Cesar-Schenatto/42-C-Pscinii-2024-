/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:03:48 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/01 19:30:29 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tempa;
	int		tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}
/*int main(void){
	int		a;
	int		b;
	
	a = 100;
	b = 5;

	int *ptrA = &a;
	int *ptrB = &b;

	ft_ultimate_div_mod(ptrA, ptrB);
	printf("%i and the remain is %i ", a, b);
	return 0; 
}*/
