/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:42:50 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/20 03:43:11 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("The factorial of 5 is: %d\n", ft_recursive_factorial(5));
	printf("The factorial of 0 is: %d\n", ft_recursive_factorial(0));
	printf("The factorial of -100 is: %d\n", ft_recursive_factorial(-100));
	return (0);
}*/
