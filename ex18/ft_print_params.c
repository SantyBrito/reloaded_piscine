/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:31:58 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/09 19:35:03 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int count, char **argv)
{
	int		i;
	char	*name;

	i = count;
	argv++;
	while (*argv != NULL)
	{
		name = *argv;
		while (*name != '\0')
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}
