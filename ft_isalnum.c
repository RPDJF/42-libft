/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rude-jes <rude-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:59:26 by rude-jes          #+#    #+#             */
/*   Updated: 2023/10/10 14:15:05 by rude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		if (!(c >= 'a' && c <= 'z'))
			if (!(c >= '0' && c <= '9'))
				return (0);
	return (1);
}

// do main function
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_isalnum('a'));
}
*/