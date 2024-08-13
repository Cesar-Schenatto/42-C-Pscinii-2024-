/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:01:33 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/12 14:54:57 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		j++;
	}
	return (0);
}
/*int main (void){
	char str1[] = "aaa";
	char str2[] = "aaW";

	printf("%i ", ft_strcmp(str1, str2));
	return 0;

}*/
