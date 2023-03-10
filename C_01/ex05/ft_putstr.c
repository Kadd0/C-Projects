/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:36:37 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/10 18:51:56 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i  = 0;
    
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	char *c = "STDOUT";
	ft_putstr(c);
}
