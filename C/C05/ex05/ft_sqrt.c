/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:16:45 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/20 18:58:03 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		else if (r == 46341)
			return (0);
		r++;
	}
	return (0);
}
/*int main (void) {

    printf("%i ", ft_sqrt(9));
    return 0;
}*/
