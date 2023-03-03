/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:28:56 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/15 16:32:59 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <='Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return(str);
}

int main()
{
	char str[] = "VSADASDQWRDFQWE";
	printf("%s", ft_strlowcase(str));
}
