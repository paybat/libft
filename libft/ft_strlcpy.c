/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:19:30 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/08 18:46:11 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	t;

	t = (ft_strlen(src));
	if (dstsize == 0)
		return (t);
	while (*src && --dstsize)
	{
		*dst = (char)*src;
		dst++;
		src++;
	}
	*dst = 0;
	return (t);
}
