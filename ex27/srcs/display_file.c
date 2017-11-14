/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:42:51 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 22:45:30 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i += 1;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	ft_error(int argc)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
}
