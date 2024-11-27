/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:43:30 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/20 03:43:55 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	printf("5 to the power of 4 is: %d\n", ft_iterative_power(5, 4));
	printf("0 to the power of 0 is: %d\n", ft_iterative_power(0, 0));
	printf("-3 to the power of -3 is: %d\n", ft_iterative_power(-3, -4));
	printf("-3 to the power of 4 is: %d\n", ft_iterative_power(-3, 4));
	return (0);
}*/
