/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:33:45 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 18:35:01 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
	{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int  main(void){
	

	char str1[] = "like a stone";
	char str2[] = "black";
	int ver = 3;
	printf("%s  %s ", str1, str2);
	ft_strncpy(str1, str2, ver);
	printf("the next ones are %s %s ", str1, str2);
	return 0;
}*/
