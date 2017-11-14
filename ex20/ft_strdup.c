/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:10:23 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 22:14:50 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len += 1;
	if (!(cpy = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		cpy[i] = src[i];
		i += 1;
	}
	cpy[i] = '\0';
	return (cpy);
}
