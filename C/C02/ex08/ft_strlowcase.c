/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:45:51 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:16:44 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
	{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] += 32;
		str++;
	}
	return (str);
}
/*int main (void) {
	
	char buffer[] = "UPPER";
	ft_strlowcase(buffer);
	printf("%s", buffer);
	return 0;
}*/
