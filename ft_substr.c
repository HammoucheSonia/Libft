/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:43:37 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/03 19:44:22 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static size_t	nombre(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*dest;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (nombre(s) < len)
		len = nombre(s);
	dest = malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return (NULL);
	if (nombre(s) > (i))
	{
		while (s[i] && i < (len + start))
		{
			dest[j] = s[i];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (dest);
}
