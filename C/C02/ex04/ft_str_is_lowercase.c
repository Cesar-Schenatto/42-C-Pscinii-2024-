/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:46:40 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:06:18 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
	{
	int	i;
	int	var;

	i = 0;
	var = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			var = 1;
		}
		str++;
	}
	return (var);
}
/*int main (void) {
	char buffer[] = "lOwe";
	printf( "%i",ft_str_is_lowercase(buffer));
	return 0;
}*/
