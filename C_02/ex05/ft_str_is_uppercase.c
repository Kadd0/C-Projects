/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:38:23 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/14 23:42:49 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main()
{
	printf("%d", ft_str_is_uppercase("ADSFSAASFQWEE"));
	printf("\n%d", ft_str_is_uppercase("SADSADsadWQEWQ"));
	printf("\n%d", ft_str_is_uppercase("324324SAFSADSADsad_dsa"));
}
