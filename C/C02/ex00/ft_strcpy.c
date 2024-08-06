/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:25:11 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/04 14:15:01 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
	{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int  main(void){
	

	char str1[] = "like a stone";
	char str2[] = "black";
	printf("%s  %s ", str1, str2);
	ft_strcpy(str1, str2);
	printf("%s %s ", str1, str2);
	return 0;
}*/
