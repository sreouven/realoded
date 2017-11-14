/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:07:33 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 22:09:48 by sreouven         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return (*s1 - *s2);
}

void	ft_sort_params(int size, char **str)
{
	int		i;
	char	*tmp;

	i = 0;
	while (i < size - 1)
	{
		if ((ft_strcmp(str[i], str[i + 1]) > 0))
		{
			tmp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = tmp;
			i = -1;
		}
		i += 1;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_params(argc, argv);
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
