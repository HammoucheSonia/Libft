/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:48:13 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/03 18:46:06 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new -> next = *alst;
	*alst = new;
}
/*
int main()
{
	t_list*premier=NULL;
	t_list*nouveau;
	int i;
	for (i=0; i<10; i++){
 		nouveau = ft_lstnew(ft_itoa(i));
 		ft_lstadd_front(&premier,nouveau);
	}
	i = 0;
	while (premier->next != 0)
	{
		printf("%s", (char *) premier->content);
		premier = premier->next;
	}
	//printf("ID : %d\n",e->Id)
	return 0;
}*/
