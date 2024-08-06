/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:06:13 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:13:25 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_str_is_printable(char *str)
	{
	int	i;
	int	var;

	i = 0;
	var = 1;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			var = 0;
		}
		str++;
	}
	return (var);
}
/*int main (void) {
	char buffer[] = "Ny \n  \a \b  aa4214";
	printf("%i ", ft_str_is_printable(buffer));
	return 0;
}*/
