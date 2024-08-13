/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:56:18 by ceaugust          #+#    #+#             */
/*   Updated: 2024/08/06 13:52:03 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str);

char	*ft_strcapitalize(char *str)
	{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	ft_strlowercase(str);
	while (str[i])
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		capitalize = !((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'));
		i++;
	}
	return (str);
}

char	*ft_strlowercase(char *str)
	{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		str++;
	}
	return (str);
}
/*int main(void)
{
	char buffer[] = "Bulbasaur, e charmander. /m w; backstreet dogs.";
	ft_strcapitalize(buffer);
	printf("%s ", buffer);
	return 0;
}*/
