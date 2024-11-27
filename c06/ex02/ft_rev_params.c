/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:57:26 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/23 20:12:55 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	argc--;
	while (argc > 0)
	{
		write (1, argv[argc], ft_strlen(argv[argc]));
		write (1, "\n", 1);
		argc--;
	}
	return (0);
}
