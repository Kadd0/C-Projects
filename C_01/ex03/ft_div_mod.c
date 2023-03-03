/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:23:12 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/10 16:17:45 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int* div, int* mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 5;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b :%d, div: %d, mod : %d\n", a, b, div, mod);
}
