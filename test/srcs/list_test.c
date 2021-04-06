/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:02:19 by cisis             #+#    #+#             */
/*   Updated: 2021/04/06 12:31:37 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasmtest.h"

static void		print_lst(t_list *begin)
{
	int		i;

	i = 0;
	printf("---Linked list printing:---\n");
	while (begin)
	{
		printf("|| %d - \"%s\" ||", i, begin->data);
		begin = begin->next;
		i++;
		if (begin)
			printf(" --> ");
		else
			printf("\n");
	}
	printf("---------------------------\n");
}

static t_list	*ft_lstnew(void *data)
{
	t_list	*res;

	if (!(res = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	res->data = data;
	res->next = NULL;
	return (res);
}

static void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (head)
	{
		while (head)
		{
			if (head->next == NULL)
				break ;
			head = head->next;
		}
		head->next = new;
	}
	else
		*lst = new;
}

static int		list_test(void)
{
	t_list		*begin;
	int			res;

	begin = ft_lstnew("begin");
	ft_lstadd_back(&begin, ft_lstnew("middle"));
	ft_lstadd_back(&begin, ft_lstnew("last"));
	printf("Linked list before manipulations:\n");
	print_lst(begin);
	res = ft_list_size(begin);
	printf("Linked list size =\t%d\n", res);
	ft_list_push_front(&begin, "new begin");
	printf("Linked list after pushing front:\n");
	print_lst(begin);
	res = ft_list_size(begin);
	printf("Linked list size =\t%d\n", res);
	return (0);
}

int				execute_list_test(void)
{
	printf("===---LINKED LIST TEST---===\n");
	list_test();
	printf("=======================\n\n");
	return (0);
}
