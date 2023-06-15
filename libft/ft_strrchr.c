/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:26:11 by lpeng             #+#    #+#             */
/*   Updated: 2023/05/04 12:56:34 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = ft_strlen(s);
	ch = (char) c;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*#include<stdio.h>
int	main()
{
	const char s[100] = " ";
	int	c = 'i';
	printf("strrchr = %s\n", ft_strrchr(s, c));
	printf("build-in = %s\n", strrchr(s, c));
	return (0);
}*/
