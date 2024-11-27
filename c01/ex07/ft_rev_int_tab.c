/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:28:47 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/09 22:13:28 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	half;
	int	i;

	half = (size) / 2; 
	size = size -1;
	i = 0;
	while (i < half)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}
/*int	main(void)
{
	int	tab[6];
	int	size;

	size = 5;
	tab[0] = -1999;
	tab[1] = 99;
	tab[2] = 0;
	tab[3] = 2;
	tab[4] = 4;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while(i<=size-1)	
	{
	printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
