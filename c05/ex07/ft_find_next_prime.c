/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:44:03 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/23 11:40:13 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (1)
	{
		i = 3;
		while (nb % i != 0 && i * i <= nb)
			i += 2;
		if (i * i > nb)
			return (nb);
		if (nb % i == 0)
			nb = nb + 2;
	}
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(90840234));
	return (0);
}*/
