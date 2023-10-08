/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:00:51 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:56:42 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	while (is_set(s1[i], set))
		i++;
	while (is_set(s1[j], set))
		j--;
	str = malloc(sizeof (char) * (j - i + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (s1[i] && i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
