/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:41:04 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/15 12:22:30 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str[4];

	str[0] = 'a';
	str[1] = 'l';
	str[2] = 'i';
	str[3] = '\0';
	if (ft_strlen(str) == 3)
	{	
		write (1, "0",1);
	}
	return (0);
}*/
