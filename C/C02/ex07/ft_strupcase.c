/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:48:03 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:15:19 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strupcase(char *str)
	{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] -= 32;
		str++;
	}
	return (str);
}
/*int main (void) {
	char buffer[] =  "upper";
	ft_strupcase(buffer); 
	printf("%s", buffer);
	return 0;
}*/
