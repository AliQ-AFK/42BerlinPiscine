/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:11:11 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/09 20:43:17 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	size--;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[5];
	int	size;

	size = 5;
	tab[0] = 5;
	tab[1] = 6;
	tab[2] = -100;
	tab[3] = 899;
	tab[4] = 99;
	ft_sort_int_tab(tab, size);
	
	for (int i = 0; i < size; i++)
	{
        	printf("%d ", tab[i]);
	}
	return (0);
}*/
