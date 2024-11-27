/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:18:11 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/17 17:18:59 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/*int	main(void)
{
	char	dest[200];
	*dest = 'A';
	*(dest + 1) = 'l';
	*(dest + 2) = 'i';
	*(dest + 3) = '\0';
	 printf("the first string is : %s\n", dest);
	char	src[] = "Qeblawi";
	 printf("the second string is : %s\n", src);
	printf("the final string is : %s\n", ft_strcat(dest, src));
	return (0);
}*/
