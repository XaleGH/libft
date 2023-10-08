/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:58:25 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:40:56 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (!nmemb || !size)
		return (NULL);
	if ((nmemb * size) > 2147483647)
		return (0);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, (nmemb * size));
	return (str);
}
