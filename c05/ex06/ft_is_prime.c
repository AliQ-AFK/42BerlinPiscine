/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:22:47 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/23 11:33:47 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (nb % i != 0 && i * i <= nb)
		i = i + 2;
	if (i * i > nb)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(100));
	printf("%d\n", ft_is_prime(-12));
	printf("%d\n", ft_is_prime(0));
	return (0);
}*/		
