/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:23:28 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/28 17:35:29 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "./libft/includes/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putchar(char c);


#endif