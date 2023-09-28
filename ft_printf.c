/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:32:47 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/28 17:52:51 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar((va_arg(args, int))));
	else if (format == 's')
		return (ft_putstr(()))
}

int		ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;
	int			length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i] +1))
		{
			length += ft_format(args, str[i] + 1);
			i++;
		}
		else
			length += ft_putchar(str[i]);
		i++;	
	}
	va_end(args);
	return (length);
}
