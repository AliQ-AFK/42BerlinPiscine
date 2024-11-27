/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:46:05 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:49:19 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	return (str);
}
/*int     main(void)
{
        char    str1[] ="hello";
        char    str2[] = "HS0a";
        char    str3[] = "^^^^";
        char    str4[] = "1234";
        char    str5[] = "HELLO";

        printf("%s\n", ft_strlowcase(str1));
        printf("%s\n", ft_strlowcase(str2));
        printf("%s\n", ft_strlowcase(str3));
        printf("%s\n", ft_strlowcase(str4));
        printf("%s\n", ft_strlowcase(str5));
        return (0);
}*/
