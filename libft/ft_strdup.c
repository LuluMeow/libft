/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:57:00 by lpeng             #+#    #+#             */
/*   Updated: 2023/04/20 11:57:35 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = get_len(src) + 1;
	i = 0;
	copy = (char *)malloc(len * sizeof(char));
	if (!copy)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main()
{
	char str[100] = "Hello meow";
	char *copy = ft_strdup(str);
	printf("i = %d\n", get_len(str));
	printf("copy = %s\n", ft_strdup(str));
	free(copy);
	return (0);
}*/
