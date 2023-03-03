/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:26:18 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/14 23:30:56 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i]<='9'))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int	main()
{
	printf("%d", ft_str_is_numeric("38294083204823"));
	printf("\n%d", ft_str_is_numeric("23049k324324"));
	printf("\n%d", ft_str_is_numeric("-sdaasdsad2423sda"));
}
