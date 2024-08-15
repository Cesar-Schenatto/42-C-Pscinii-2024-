/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:23:25 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/15 19:39:38 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
	{
		n = nbr;
	}
	if (n > (unsigned int)size)
	{
		rec(n / size, base, size);
	}
	c = base[n % size];
	write(1, &c, 1);
}

int	ver(char *base)
	{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == base[i + 1] || base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		i++;
	}
	if (i < 2)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ver(base) == 1)
	{
		while (base[s])
		{
			s++;
		}
		rec(nbr, base, s);
	}
}
/*int main (void){

    ft_putnbr_base(255, "01");
	write(1, "\n", 1);
    ft_putnbr_base(255, "poneyvif");
	write(1, "\n", 1);
    ft_putnbr_base(-255, "0123456789");
	write(1, "\n", 1);
    ft_putnbr_base(-255, "0123456789abcdef");
    return 0;
}*/
