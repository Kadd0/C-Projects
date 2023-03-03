/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:42:28 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/15 15:59:29 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int i;

	i=0;
	while(str[i])
	{
		if(!(str[i] >= 32 && str[i] <= 126))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main()
{
	printf("%d", ft_str_is_printable("SADSBRWQRWQ324234%&"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
	printf("\n%d", ft_str_is_printable(""));
}
