/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:24:59 by jfranchi          #+#    #+#             */
/*   Updated: 2021/08/30 22:37:24 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(int n)
{
	char p;

	p = n + '0';
	write(1, &p, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_print(nb % 10);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*input;
	int		i;
	int		j;

	input = (char *)str;
	va_start(args, str);
	i = 0;
	j = 0;
	while (*input)
	{
		if (input[i] == '%')
		{
			i++;
			if (input[i] == 'c')
				write(1, &i, 1);
			else if (input[i] == 's')

			else if (input[i] == 'p')

			else if (input[i] == 'd' || input[i] == 'i')

			else if (input[i] == 'u')

			else if (input[i] == 'x')

			else if (input[i] == '%')
				write(1, '%', 1);
			else NULL;

		}
		else
		{
			write(1, &input[i], 1);
			i++;
		}
	}
	va_end(args);
	return (j)
}
