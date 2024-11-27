/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:19:43 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/19 20:52:11 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (start);
}

/*int     main(void)
{
        char    dest[200];
        *dest = 'A';
        *(dest + 1) = 'l';
        *(dest + 2) = 'i';
        *(dest + 3) = '\0';
         printf("the first string is : %s\n", dest);
        char    src[] = "Qeblawi";
         printf("the second string is : %s\n", src);
        printf("the final string is : %s\n", ft_strncat(dest, src, 99));
	return (0);
}*/
