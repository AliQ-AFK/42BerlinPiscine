/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:42:04 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/20 03:42:22 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 1)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	printf("the factorial of 5 is %d" , ft_iterative_factorial(-100));
	return (0);
}*/
