/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:54:50 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/10 19:01:28 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while(str[len])
	{
		len++;
	}
	return(len);
}

int main(void)
{
	printf("%d",ft_strlen("kadir"));
}
