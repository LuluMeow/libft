/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:26:11 by lpeng             #+#    #+#             */
/*   Updated: 2023/04/20 10:34:04 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = 0;
	ch = (char) c;
	while (s[i] != '\0' || ch == '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*#include<stdio.h>
#include<string.h>

int	main()
{
	const char s[100] = "i love my kitten";
	int	c = 'l';
	printf("strchr = %s\n", ft_strchr(s, c));
	printf("build-in = %s\n", strchr(s, c));
	return (0);
}*/
