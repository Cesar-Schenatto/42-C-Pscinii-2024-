/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:12:05 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/21 20:31:11 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] && s2[c])
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	an[16384];
	int	antibo;

	i = 1;
	antibo = 1;
	while (antibo < ac)
	{
		an[antibo] = antibo;
		antibo++;
	}
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[an[i]], av[j]) > 0)
				ft_swap(&an[i], &an[j]);
			j++;
		}
		ft_putstr(av[an[i++]]);
	}
	return (0);
}
