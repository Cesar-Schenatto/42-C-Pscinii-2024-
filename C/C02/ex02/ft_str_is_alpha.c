/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:18:53 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/04 16:15:07 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_str_is_alpha(char *str)
	{
	int	i;
	int	ver;

	ver = 1;
	i = 1;
	while (str[i])
	{
		if (!(str[i] <= 122 && str[i] >= 97) || !(str[i] >= 65 && str[i] <= 90))
		{
			ver = 0;
		}
		str++;
	}
	return (ver);
}
/*int main(void){
	char buffer[] = "HEl421lo";
	printf("%i",ft_str_is_alpha(buffer));
return 0;
}*/
