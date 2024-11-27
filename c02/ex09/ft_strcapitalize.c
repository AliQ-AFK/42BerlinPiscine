/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:51:18 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/15 21:50:04 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*lower(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (start);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;

	lower(str);
	start = str;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] -32;
	str++;
	while (*str)
	{
		if ((*(str - 1) < 'a' || *(str - 1) > 'z')
			&& (*(str - 1) < '0' || *(str - 1) > '9')
			&& (*(str - 1) < 'A' || *(str - 1) > 'Z')
			&& (*str >= 'a' && *str <= 'z'))
			*str = *str - 32;
		str++;
	}
	return (start);
}
/*int     main(void)
{
        char    str[] = "my N@a^m}e    is ali_qebla
wi ***my))age$is)19years_old a-l-i";	
	char	str1[] ="sALUT, comment t uvs? 
42mots quarante-deux; cinquante+et+un";
        printf ("%s\n", ft_strcapitalize(str));
	printf ("%s", ft_strcapitalize(str1));
        return (0);
}*/
