/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:37:39 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 20:55:06 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_str_is_alpha(char *str)
	{
	int	i;
	int	ver;

	ver = 1;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122))
		{
			ver = 0;
		}
		i++;
	}
	return (ver);
}
/*int main(void){
	char buffer[] = "HEl421lo";
	printf("%i",ft_str_is_alpha(buffer));
return 0;
}*/
