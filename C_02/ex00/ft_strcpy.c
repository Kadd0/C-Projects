/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:47:09 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/14 19:29:27 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	
	dest[i] = '\0';	
	return(dest);

}

int main()
{
	char srcArray[] = "kadir";
	char destArray[]= "";
	printf("%s",ft_strcpy(destArray,srcArray));
}
