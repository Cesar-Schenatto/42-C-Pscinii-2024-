/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:40:09 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/01 20:00:33 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void){
	int		a;
	int		b;
	
	a = 100;
	b = 5;
	int y;
	int z;

	int *div = &y;
	int *mod = &z;

	ft_div_mod(a, b, div, mod);
	printf("%i and the remain is %i ",*div , *mod);
	return 0; 
}*/
