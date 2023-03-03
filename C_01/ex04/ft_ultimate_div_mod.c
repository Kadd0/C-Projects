/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkavraz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:19:55 by kkavraz           #+#    #+#             */
/*   Updated: 2023/02/10 16:35:16 by kkavraz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int* a, int* b)
{
	int div;
	int mod;
	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

int main()
{
	int a;
	int b;

	a=5;
	b=2;

	ft_ultimate_div_mod(&a,&b);
	printf("%d, %d",a,b);
}
