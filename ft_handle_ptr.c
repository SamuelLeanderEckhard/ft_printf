/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:10:15 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/29 18:50:27 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_puthexa(long int n, char c);

int	ft_handle_ptr(unsigned long ptr, int c)
{
	int		len;

	len = 0;
	if (!c)
	{
		len += write(1, "0x", 2);
		c++;
	}
	len += ft_puthexa(ptr, c);
	return (len);
}
