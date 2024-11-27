/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:43:46 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/15 18:28:30 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int	main(void)
{
	int	num1;
	int	num2;
	
	num1 = 5;
	num2 =  1 ;
	//change all ints to char
	ft_swap(&num1, &num2);
	write(1,&num1,1);
	write(1,&num2,1);
	return (0);
}*/
