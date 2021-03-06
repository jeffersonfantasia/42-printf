/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:24:59 by jfranchi          #+#    #+#             */
/*   Updated: 2021/09/14 22:07:29 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void	ft_print_int(int n)
{
	char p;

	p = n + '0';
	write(1, &p, 1);
}

size_t	ft_putnbr(int nb)
{
	char	str[12];
	int		i;
	int		len;

	i = 0;
	len = 0;
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
	ft_print_int(nb % 10);
	return (len);
}
*/
int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*input;
	int		i;
	int		printed;

	input = (char *)str;
	va_start(args, str);
	i = 0;
	printed = 0;
	while (*input)
	{
		if (input[i] == '%')
		{
			i++;
			if (input[i] == 'c')
				printed += write(1, &i, 1);
			/*else if (input[i] == 's')
				printed += putstr(va_arg(args, char *));
			else if (input[i] == 'p')
				printed += va_arg(args, size_t);
				//retorna endereço do ponteiro - prefixo 0x - valor hexadecimal
			else if (input[i] == 'd' || input[i] == 'i')
				// putnbr
				printed += ft_putnbr(va_arg(args, int);
			else if (input[i] == 'u')
				// putnbr sem ser negativo unsined INT
				printed += va_arg(args, unsigned int);
			else if (input[i] == 'x')
			//retorna valor hexadecimal
			printed +=  va_arg(args, unsigned int);
			else if (input[i] == 'X')
			//retorna valor hexadecimal as letras em maiusculo TO_UPPER
			printed +=  va_arg(args, unsigned int);
			else if (input[i] == '%')
				write(1, '%', 1);
			else NULL;


		*/
		}
		else
		{
			printed += write(1, &input[i], 1);
			i++;
		}
	}
	va_end(args);
	return (printed);
}
