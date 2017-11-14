/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:15:17 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 23:04:02 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (max <= min)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i += 1;
	}
	return (tab);
}
