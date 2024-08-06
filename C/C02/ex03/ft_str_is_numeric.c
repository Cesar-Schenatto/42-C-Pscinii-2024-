/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:52:00 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:04:35 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_str_is_numeric(char *str)
{
	int	ver;
	int	i;

	i = 0;
	ver = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			ver = 0;
		}
		str++;
	}
	return (ver);
}
/*int main (void) {
	char buffer[] = "321321";
	printf("%i ", ft_str_is_numeric(buffer));
	return 0;
}*/	
