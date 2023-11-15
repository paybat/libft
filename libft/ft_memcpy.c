/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:49:28 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/07 10:42:35 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *) dst) = *((unsigned char *) src);
		i++;
		src++;
		dst++;
	}
	return (ptr);
}
