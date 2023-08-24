/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xale <xale@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 23:37:55 by xale              #+#    #+#             */
/*   Updated: 2023/08/23 23:37:55 by xale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int ft_isupper(int c);
int	ft_islower(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_strlen(char *str);
int	ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	*ft_memset(void *b, int c, size_t len);

#endif