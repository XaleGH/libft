/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:13:36 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:44:23 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*b;

	i = 0;
	b = (unsigned char *) s;
	while (b[i] && n > 0)
	{
		if (b[i] == c)
			return (b + i);
		i++;
		n--;
	}
	return (NULL);
}
