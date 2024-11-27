/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:23:23 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/14 19:29:29 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
/*int main(void)
{
	char src[] = "Hello, World!";
	char dest[20]; // Make sure this is large enough to hold the copied string
	unsigned int size = sizeof(dest); // Size of the destination buffer

	unsigned int result = ft_strlcpy(dest, src, size);
	
	printf("src: %s\n", src);
	printf("Dest after copy: %s\n", dest);
	printf("Length of src: %u\n", result);

	return 0;
}*/
