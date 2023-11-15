/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:53:17 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/08 20:36:34 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	size;
	size_t	size1;
	size_t	size2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	size = size1 + size2;
	p = (char *)malloc((size + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, size1);
	ft_memcpy(p + size1, s2, size2 + 1);
	return (p);
}
