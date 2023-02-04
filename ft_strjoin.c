/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:57:21 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 19:36:12 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

static char	*ft_str(char *s1, char *s2)
{
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = -1;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (ft_str((char *)s1, (char *)s2));
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	while (i++, s1[i])
	{
		dest[j] = s1[i];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		dest [j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
