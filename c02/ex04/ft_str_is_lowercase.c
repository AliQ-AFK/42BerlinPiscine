/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:24:52 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:27:50 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int     main(void)
{
	printf("%d\n", ft_str_is_lowercase("meow"));
	printf("%d\n", ft_str_is_lowercase("HelloWorld"));
        printf("%d\n", ft_str_is_lowercase("12"));
        printf("%d\n", ft_str_is_lowercase("1meow"));
        printf("%d\n", ft_str_is_lowercase("hello0"));
        printf("%d\n", ft_str_is_lowercase("H****m"));
        printf("%d\n", ft_str_is_lowercase(""));
        return (0);
}*/
