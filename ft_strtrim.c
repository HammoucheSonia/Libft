/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:09:33 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 19:42:29 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	char_in(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	nb_malloc(char const *s1, char const *s2)
{
	int	i;
	int	k;

	i = 0;
	k = ft_strlen(s1)-1;
	while (char_in(s2, s1[i]) == 1)
		i++;
	while (char_in(s2, s1[k]) == 1)
		k--;
	return (k - i + 1);
}

static char	*ft_str(char const *s1, char const *s2)
{
	if (!s1)
		return (ft_strdup(""));
	if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	if (!s1 || !s2)
		return (ft_str(s1, s2));
	j = 0;
	i = 0;
	k = ft_strlen(s1) - 1;
	if (nb_malloc(s1, s2) <= 0)
		return (ft_strdup(""));
	dest = malloc(sizeof(char) * (nb_malloc(s1, s2) + 1));
	if (!dest)
		return (NULL);
	while (char_in(s2, s1[i]) == 1)
		i++;
	while (s1[i] && (j < (nb_malloc(s1, s2))))
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
