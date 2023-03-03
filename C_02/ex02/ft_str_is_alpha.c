/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:38:19 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/14 23:24:32 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	if(str[i] == '\0')
	{
		return(1);
	}
	while(str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
		{
			return(0);
		}
	}
	return(1);
}
int main()
{
	printf("%d", ft_str_is_alpha("asdsafsfdsgdfhfhfgh"));
	printf("\n%d", ft_str_is_alpha("asdfkdsgl12sdakdsla"));
	printf("\n%d", ft_str_is_alpha("-_213213dasdsa213"));
}
