/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:23:18 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/14 19:43:20 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest,char *src, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[] = "kadirorhunkavraz";
	char dest[17];
    printf("%s\n", ft_strncpy(dest, src, 17));	
}
