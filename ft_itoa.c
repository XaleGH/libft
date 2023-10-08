/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:18:59 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:41:51 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_unit(long int save, int unit, int n)
{
	while (save > 9)
	{
		save = save / 10;
		unit++;
	}
	unit++;
	if (n < 0)
		unit++;
	return (unit);
}

char	*ft_itoa(int n)
{
	long int	save;
	int			unit;
	char		*tab;

	save = n;
	if (n < 0)
		save = save * -1;
	unit = count_unit(save, unit, n);
	tab = malloc(sizeof (char) * unit + 1);
	if (!tab)
		return (NULL);
	tab[unit--] = '\0';
	while (save > 9)
	{
		tab[unit--] = (save % 10) + '0';
		save = save / 10;
	}
	tab[unit] = save + '0';
	if (n < 0)
		tab[--unit] = '-';
	return (tab);
}
