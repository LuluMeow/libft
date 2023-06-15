/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:31:39 by lpeng             #+#    #+#             */
/*   Updated: 2023/04/28 19:38:46 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != 0)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*#include<stdlib.h>
t_list	*ft_create_elem(void *data)
{
	t_list *new_node;
	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->next = NULL;
		new_node->content = data;
	}
	return (new_node);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first_node;

	if(*begin_list)
	{
		first_node = ft_create_elem(data);
		first_node->next = *begin_list;
		*begin_list = first_node;
	}
	else
		*begin_list = ft_create_elem(data);
}

#include<stdio.h>
int	main()
{
	t_list *list;
	list = NULL;
	char a = 'c';
	char b = 'a';
	char c = 't';
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	ft_list_push_front(&list, p1);
	ft_list_push_front(&list, p2);
	ft_list_push_front(&list, p3);
	int num = ft_lstsize(list);
	printf("size of list = %d", num);
	return (0);
}*/
