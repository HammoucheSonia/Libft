/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:22:58 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/03 19:49:21 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char) c)
			return (&str[i]);
		i++;
	}
	if (c == 0 && n == 0)
		return (NULL);
	if (c == 0)
		return ((char *)&str[i]);
	return (NULL);
}
