/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:20:34 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:23:27 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int     main(void)
{
        printf("%d\n", ft_str_is_numeric("HelloWorld"));
        printf("%d\n", ft_str_is_numeric("12"));
        printf("%d\n", ft_str_is_numeric("1meow"));
        printf("%d\n", ft_str_is_numeric("hello0"));
        printf("%d\n", ft_str_is_numeric("H****m"));
        printf("%d\n", ft_str_is_numeric(""));
        return (0);
}*/
