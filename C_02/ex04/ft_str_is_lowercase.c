/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:33:54 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/14 23:37:33 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(!(str[i]>='a' && str[i] <= 'z'))
		{
			return(0);
		}
		i++;
	}
	return(1);
}
int	main()
{
	printf("%d", ft_str_is_lowercase("asdfeqreqregdsfds"));
	printf("\n%d", ft_str_is_lowercase("adssaSdsadsadqwe"));
	printf("\n%d", ft_str_is_lowercase("234324--sdadsa3424"));
}
