/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:15:37 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/06 17:53:34 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int current_first;

	i = size / 2;
	while (i--)
	{
		current_first = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = current_first;
	}
}
