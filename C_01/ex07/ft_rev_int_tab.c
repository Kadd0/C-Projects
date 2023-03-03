/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:59:16 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/10 20:03:20 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size--;
	while(i < size)
	{
		swap = tab[i];
		tab[i] = tab[size];
		tab[size] = swap;
		i++;
		size--;
	}
}

int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}
