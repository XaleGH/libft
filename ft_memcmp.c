/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:23:30 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:45:08 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	int		j;
	char	*b;
	char	*c;

	i = 0;
	j = 0;
	b = (char *) s1;
	c = (char *) s2;
	while ((b[i] && i < n && j < n) || (c[j] && i < n && j < n))
	{
		if (b[i] != c[j])
			return (b[i] - c[j]);
		i++;
		j++;
	}
	return (b[i] - c[j]);
}
