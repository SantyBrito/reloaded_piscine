/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:13:26 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/09 19:25:20 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	reslut;
	int	i;

	reslut = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		reslut *= i;
		i++;
	}
	return (reslut);
}
