/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:57:54 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/07 16:39:52 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Order numbers with bubble sort
** -Build and run:
** gcc -Wall -Werror -Wextra ft_sort_int_tab.c -o out && ./out
** gcc ft_sort_int_tab.c -o out && ./out
** -Check Sintax:
** norminette -R CheckForbiddenSourceHeader ft_sort_int_tab.c
*/

void	ft_swap_numbers(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap_numbers(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

void	ft_swap_numbers(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
