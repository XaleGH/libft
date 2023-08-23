/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:41:51 by marvin            #+#    #+#             */
/*   Updated: 2023/08/14 15:41:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include LIBFT_H
#include <unistd.h>
#include <stdlib.h>

int	ft_islower(char c);
int	ft_isupper(char c);
int	ft_isalpha(char c);
int	ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isprint(char c);
int ft_isascii(char c);
int	ft_strlen(char *str);
int	ft_atoi(char *str);
void    ft_putchar(char c);
void ft_putnbr(int nb);

#endif