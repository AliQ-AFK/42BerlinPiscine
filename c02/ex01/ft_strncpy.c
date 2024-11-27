/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:06:16 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 18:09:41 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char	src[] = "MEOW";
	char	dest[10];
	unsigned int i = 0;
	unsigned int n = 2;
	ft_strncpy(dest, src, n);
	while(i<n)
	{	
		write(1,dest+i,1);
		i++;
	}
	return (0);
}*/
