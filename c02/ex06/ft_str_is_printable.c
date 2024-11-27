/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:35:26 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:37:46 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int     main(void)
{
        printf("%d\n", ft_str_is_printable("12"));
        printf("%d\n", ft_str_is_printable("1meow"));
        printf("%d\n", ft_str_is_printable("hello0"));
        printf("%d\n", ft_str_is_printable("H****m"));
        printf("%d\n", ft_str_is_printable(""));
        printf("%d\n", ft_str_is_printable("MEOW"));
        printf("%d\n", ft_str_is_printable("\n"));


        return (0);
}*/
