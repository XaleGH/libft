/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:22:29 by asaux             #+#    #+#             */
/*   Updated: 2023/10/11 16:21:50 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *)s;
	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == c)
			return (b + i);
		i--;
	}
	return (NULL);
}
