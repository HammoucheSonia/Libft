/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:40:11 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 19:27:44 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = (char) s[i];
		i++;
	}
	return (dest);
}
