/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:32:44 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/15 00:33:37 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[5];
	char	dest[5];
	int	i;

	src[0] = 'M';
	src[1] = 'e';
	src[2] = 'o';
	src[3] = 'w';
	src[4] = '\0';
	i = 0;
	ft_strcpy(dest, src);
	while (*(dest + i) != '\0')
	{
		write (1, dest + i, 1);
		i++;
	}
	return (0);
}*/
