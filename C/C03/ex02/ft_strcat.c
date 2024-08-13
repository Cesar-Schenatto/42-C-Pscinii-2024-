/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <ceaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:27:23 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/08 16:07:01 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strcat(char *dest, char *src)
	{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
/*int main (void){
	char str1[] = "black hole sun ";
	char str2[] = "won't you come";
	ft_strcat(str1, str2);
	printf("%s ", str1);
	return 0;
}*/
