/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:15:54 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/07 18:32:34 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//the pointer is decalred in the parameter,
// if a main function is done, the pointer will be initialised 
// in main create an int variable and the peremter will be the "&" of it!
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{ 
	int	i;
	ft_ft(&i);
	write(1, ptr, 2);
//expeccted output *
	return (0);
}
*/
