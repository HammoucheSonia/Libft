/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:58:21 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 19:12:56 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = (char *)malloc(n * size);
	if (!dest)
		return (NULL);
	ft_bzero((void *)dest, n * size);
	return ((void *)dest);
}
