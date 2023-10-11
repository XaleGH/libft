/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:13:36 by asaux             #+#    #+#             */
/*   Updated: 2023/10/11 15:58:59 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*b;

	i = 0;
	b = (char *) s;
	while (b[i] && n > 0)
	{
		if (b[i] == c)
			return (b + i);
		i++;
		n--;
	}
	if (c == '\0')
		return (b + i);
	return (NULL);
}
