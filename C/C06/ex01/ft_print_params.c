/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:58:50 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/20 15:49:49 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_params(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	int c;

	
	c = 1;
	while (c < ac)
	{
		ft_print_params(av[c]);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
