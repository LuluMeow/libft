/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:59:15 by lpeng             #+#    #+#             */
/*   Updated: 2023/05/04 16:02:54 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>
#include <stdlib.h>

int main() {
   int *arr;
   int size = 5;

   arr = (int *)ft_calloc(size, sizeof(int));

   for (int i = 0; i < size; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");
   free(arr);
   return 0;
}*/
