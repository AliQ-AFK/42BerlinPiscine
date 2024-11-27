/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:44:12 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/20 03:44:19 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//base case is power >0 when it reached thne recursion stops!:x
//chain of return statemets and they would behave as ints
int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("5 to power of 3 is : %d\n", ft_recursive_power(5, 3));
	printf("-5 to power of -3 is : %d\n", ft_recursive_power(-5, -3));
	printf("0 to power of 0 is : %d\n", ft_recursive_power(0, 0));
	printf("-4 to power of 0 is : %d\n", ft_recursive_power(-4, 0));
	return (0);
}
*/
