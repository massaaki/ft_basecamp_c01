/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:30:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/07 20:39:48 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_result;
	int temp_mod;

	temp_result = *a / *b;
	temp_mod = *a % *b;
	*a = temp_result;
	*b = temp_mod;
}
