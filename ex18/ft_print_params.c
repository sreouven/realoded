/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:04:56 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 22:05:37 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i += 1;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i += 1;
		}
	}
	return (0);
}
