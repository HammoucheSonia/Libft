/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:18:43 by shammouc          #+#    #+#             */
/*   Updated: 2021/12/05 16:50:02 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i > -1)
	{
		if ((unsigned char) str[i] == (unsigned char) c)
			return ((char *) &str[i]);
		i--;
	}
	if (c == 0)
		return ((char *) &str[ft_strlen(str)]);
	return (NULL);
}
