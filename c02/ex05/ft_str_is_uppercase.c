/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:32:17 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:33:30 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int     main(void)
{
        printf("%d\n", ft_str_is_uppercase("12"));
        printf("%d\n", ft_str_is_uppercase("1meow"));
        printf("%d\n", ft_str_is_uppercase("hello0"));
        printf("%d\n", ft_str_is_uppercase("H****m"));
        printf("%d\n", ft_str_is_uppercase(""));
        printf("%d\n", ft_str_is_uppercase("MEOW"));

        return (0);
}*/
