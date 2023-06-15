/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:09:51 by lpeng             #+#    #+#             */
/*   Updated: 2023/04/28 15:35:27 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <ctype.h>

/*char	f(unsigned int i, char c)
{
    if (i % 2 == 0) {
        return toupper(c);
    } else {
        return tolower(c);
    }
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	char const *s = "mimimimamama";
	char *str = ft_strmapi(s, f);
	printf("%s\n", str);
	return (0);
}*/
