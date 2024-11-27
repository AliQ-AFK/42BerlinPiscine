/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqeblawi <aqeblawi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 01:06:21 by aqeblawi          #+#    #+#             */
/*   Updated: 2024/10/15 02:23:00 by aqeblawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ALI";
	s2 = "ALIz";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s1));
	printf("%d\n", ft_strcmp(s2, s1));  
	return (0);
}*/
