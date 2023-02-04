/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:57:55 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/02 15:17:17 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	char		*chaine;

	i = 0;
	chaine = (char *)str;
	while (i < n)
	{
		chaine[i] = (char)c;
		i++;
	}
	return (chaine);
}
