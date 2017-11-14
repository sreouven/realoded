/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreouven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:57:27 by sreouven          #+#    #+#             */
/*   Updated: 2017/11/12 21:57:40 by sreouven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
		resultat = nb * ft_recursive_factorial(nb - 1);
	}
	return (resultat);
}
