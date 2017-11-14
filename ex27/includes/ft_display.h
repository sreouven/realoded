/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:44:22 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 22:44:24 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *str);
void	ft_error(int argc);

#endif
