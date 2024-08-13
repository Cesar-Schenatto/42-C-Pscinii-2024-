/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <ceaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:12:34 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/08 16:12:45 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
	{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (i < nb && src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
/*int main (void){
	char str1[] = "and wash away the rain ";
	char str2[] = "black hole sun";
	unsigned int n = 5;
	ft_strncat(str1, str2, n);
	printf("%s ", str1);
	return 0;
}*/
