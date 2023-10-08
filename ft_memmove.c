/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:17:12 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:47:48 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (n-- >= 0)
			*d++ = *s++;
	}
	else
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n-- >= 0)
			*d-- = *s--;
	}
	return (dest);
}
