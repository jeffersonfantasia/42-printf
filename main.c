/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:58:03 by jfranchi          #+#    #+#             */
/*   Updated: 2021/09/14 22:21:14 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

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

int	main(void)
{
	char str = 't';

	//ft_printf("A letra escolhida é %c\n", str);
	printf("A letra escolhida é %c\n", str);
	return (0);
}