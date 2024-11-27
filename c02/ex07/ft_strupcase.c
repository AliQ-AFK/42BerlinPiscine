/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:39:30 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:45:06 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str1[] ="hello";
	char	str2[] = "HS0a";
	char	str3[] = "^^^^";
	char	str4[] = "1234";
	char	str5[] = "HELLO";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	return (0);
}*/
