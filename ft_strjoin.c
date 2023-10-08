/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:59:43 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:38:54 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = malloc(sizeof (char) * (i + j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
