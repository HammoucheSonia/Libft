/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:59:49 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 19:32:18 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*src;
	char	*dest;
	size_t	i;

	i = -1;
	src = (char *)str2;
	dest = (char *)str1;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			dest[n - 1] = (char) src[n - 1];
			n--;
		}
	}
	else
	{
		while (i++, i < n)
			dest[i] = (char) src[i];
	}
	return (dest);
}
