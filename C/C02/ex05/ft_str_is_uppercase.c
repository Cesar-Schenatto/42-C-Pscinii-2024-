/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:51:38 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:09:07 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
	{
	int	i;
	int	var;

	i = 0;
	var = 1;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			var = 0;
		}
		i++;
	}
	return (var);
}
/*int main (void){
	char buffer[] = "";
	printf("%i ", ft_str_is_uppercase(buffer));
	return 0;
}*/
