/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:30:31 by lpeng             #+#    #+#             */
/*   Updated: 2023/04/28 15:09:03 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(long long n)
{
	int	count;

	count = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long long	num;

	num = n;
	len = count_digit(num);
	if (num < 0)
	{
		num = -num;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (char)(num % 10 + '0');
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*int	main()
{
	int c = -2147483648;
	char *str = ft_itoa(c);
	printf("str = %s\n",str);
	return (0);
}*/
