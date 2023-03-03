/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:34:16 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/15 20:45:22 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if(size != 0)
	{
		while(src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(x);
}

int main()
{
	char src[] = "123456";
   	char dest[]	= "abcdef";
	printf("%d | %s", ft_strlcpy(dest,src,6),dest);
}
