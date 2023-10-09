/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:58:36 by asaux             #+#    #+#             */
/*   Updated: 2023/10/09 11:02:56 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	int		i;
	int		k;

	b = (char *) big;
	l = (char *) little;
	i = 0;
	if (!l)
		return (b);
	while (b[i] && i < (int) len)
	{
		k = 0;
		while (b[i + k] == l[k] && i + k < (int) len)
		{
			if (l[k] == '\0')
				return (b + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
