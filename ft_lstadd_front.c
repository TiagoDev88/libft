/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:32:16 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/11 16:19:49 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *ptr;

	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

#include <stdio.h>

int main(void)
{
	int i = 20;
	int s = 30;
	int j = 40;

	
	int array[] = {1, 2, 3};
	int x = 0;

	t_list *lst;
	t_list *novo_NO;

	while (x < 3)
	{
		// Criamos um no novo
		novo_NO = ft_lstnew(&array[x]);
		// Adicionamos a frente
		ft_lstadd_front(&lst, novo_NO);
		x++;	
	}

	t_list *ptr = lst;
	int size = 0;
	// ptr1 -> ptr2 -> ptr3 -> NULL
	while (ptr != NULL)
	{
		printf("%i ", *(int *)ptr->content);
		ptr = ptr->next;
		size++;
	}
	printf("SIZE: %i\n", size);
	ptr = lst;
	while (ptr != NULL)
	{
		t_list *temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int i = 20;
	int s = 30;
	int j = 40;

	t_list *novo_NO;
	novo_NO = ft_lstnew(&i);

	t_list *novo_NO2;
	novo_NO2 = ft_lstnew(&s);

	t_list *novo_NO3;
	novo_NO3 = ft_lstnew(&j);

	novo_NO->next = novo_NO2;
	novo_NO2->next = novo_NO3;

	t_list *ptr = novo_NO;
	int size = 0;
	// ptr1 -> ptr2 -> ptr3 -> NULL
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	//printf("%i ", *(int *)ptr->content);
	printf("%i\n", size);
	
	return (0);
}
*/