/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:55:11 by lpeng             #+#    #+#             */
/*   Updated: 2023/05/04 13:04:02 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == ((unsigned char) c))
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
//    char *buildin = memchr(str, 'W', strlen(str));
    char *ptr = ft_memchr(str, 'o', strlen(str));
    
    if (ptr != NULL) {
        printf("Found character 'W' at position: %ld\n", ptr - str);
		printf("%s",ptr);
    } else {
        printf("Character not found!\n");
    }
    
    return 0;
}*/
