/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:15:42 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:16:35 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_alpha("HelloWorld"));
	printf("%d\n", ft_str_is_alpha("12"));
	printf("%d\n", ft_str_is_alpha("1meow"));
	printf("%d\n", ft_str_is_alpha("hello0"));
	printf("%d\n", ft_str_is_alpha("H****m"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}
*/	
