/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:56:00 by asaux             #+#    #+#             */
/*   Updated: 2023/10/08 17:49:40 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (n < 0)
	{
		nb = nb * -1;
		ft_putchar_fd('-', fd);
	}
	if (nb > 9)
		ft_putnbr_fd((nb / 10), fd);
	ft_putchar_fd((nb % 10), fd);
}
