/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:32:27 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:54:23 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	char	*sc;

	sc = (char *) src;
	i = 0;
	if (size > 0)
	{
		while (sc[i] && i < size - 1)
		{
			dst[i] = sc[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(sc));
}
