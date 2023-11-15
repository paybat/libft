/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:10:10 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/14 10:03:37 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	l_retu;

	if (!dst && src && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize >= d_len)
		l_retu = s_len + d_len;
	else
		l_retu = s_len + dstsize;
	if (dstsize == 0 || !dst)
		return (l_retu);
	while (src[i] != '\0' && d_len < dstsize - 1)
	{
		dst[d_len] = src[i];
		i++;
		d_len++;
	}
	dst[d_len] = '\0';
	return (l_retu);
}
