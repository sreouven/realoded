/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:56:28 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 23:00:44 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		resultat;

	i = 1;
	resultat = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		resultat *= i;
		i += 1;
	}
	return (resultat);
}
