/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:13:34 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/22 18:16:39 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	ret;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	ret = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (ret);
}
/*int main (void) {

    printf("%i ", ft_fibonacci(7));
    return 0;
}*/
