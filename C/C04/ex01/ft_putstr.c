/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:44:48 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/08 18:48:49 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main (void) {

	char buffer[] = "Holy Diver, you've been down too long in the midnight sea";
	ft_putstr(buffer);
	return 0;
}
