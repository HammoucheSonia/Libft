/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:00:04 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 15:00:42 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n )
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char *) s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s2[j] == s1[i + j] && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
			{
				return ((char *)(s1 + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
