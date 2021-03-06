/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:30:55 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 23:17:33 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			result += 1;
		i += 1;
	}
	return (result);
}
