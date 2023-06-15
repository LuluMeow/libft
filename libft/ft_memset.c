/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:57:03 by lpeng             #+#    #+#             */
/*   Updated: 2023/04/27 12:14:03 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*prt;

	i = 0;
	prt = b;
	while (i < len)
	{
		prt[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>

int main() {
//   char str[20];
//   ft_memset(str, 'A', 10);
   int arr[10];
   memset(arr, 0, sizeof(arr));
   for (int i = 0; i <10; i++)
   {
	   printf("%i",arr[i]);
   }
   return 0;
}*/
