/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:43:32 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 22:44:12 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

#define BUFF_SIZE 100

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	if (argc != 2)
	{
		ft_error(argc);
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, buff, BUFF_SIZE)))
		{
			buff[ret] = '\0';
			ft_putstr(buff);
		}
		close(fd);
	}
	return (0);
}
