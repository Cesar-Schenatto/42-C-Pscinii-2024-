/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:45:31 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/13 18:33:18 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		flag = (str[i] = '-') 
		i++	
	}
}
int main (void) {
	char buffer[] = "--+-+-+-+++-+--5123nya"
	printf("%d ",ft_atoi(buffer));
	return 0;

}
