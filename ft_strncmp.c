/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:30:25 by asaux             #+#    #+#             */
/*   Updated: 2023/10/09 11:01:03 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		k;
	char	*b;
	char	*c;

	i = 0;
	j = 0;
	k = n;
	b = (char *) s1;
	c = (char *) s2;
	while ((b[i] && i < k && j < k) || (c[j] && i < k && j < k))
	{
		if (b[i] != c[j])
			return (b[i] - c[j]);
		i++;
		j++;
	}
	return (b[i] - c[j]);
}
