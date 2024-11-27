/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:16:20 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/20 03:16:25 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str++)
		write (1, str - 1, 1);
}
/*int	main(void)
{
	ft_putstr("hello World!");
	return (0);
}*/
