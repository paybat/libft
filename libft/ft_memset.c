/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:58:07 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/15 15:07:39 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t lent)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (lent > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		lent--;
	}
	return (b);
}
