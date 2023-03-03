/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:58:44 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/10 13:08:50 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_swap(int *a, int *b)
{
	int	swap;

	swap=*a;
	*a = *b;
	*b = swap;
}

int main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;


	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);

	printf("%d,%d\n", a, b);
}
