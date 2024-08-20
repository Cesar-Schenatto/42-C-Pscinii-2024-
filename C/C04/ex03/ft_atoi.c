/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:45:31 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/19 16:28:45 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	flag;
	int	ret;

	i = 0;
	flag = 1;
	ret = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (ret * flag);
}
/*int main (void) {
	char buffer[] = "--+-+-+-+++-+--5123nya";
	printf("%d ",ft_atoi(buffer));
	return 0;

}*/
