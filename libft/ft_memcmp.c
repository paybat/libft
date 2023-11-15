/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:19:54 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/08 15:32:58 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a_s1;
	unsigned char	*a_s2;

	i = 0;
	a_s1 = (unsigned char *)s1;
	a_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (a_s1[i] != a_s2[i])
			return (a_s1[i] - a_s2[i]);
		i++;
	}
	return (0);
}
