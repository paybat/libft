/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:36:50 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/09 11:58:08 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	j = 0;
	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		return (ft_strdup(s + start));
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (j < len && *(s + start))
	{
		*(ptr + j) = *((char *)(s + start));
		j++;
		start++;
	}
	ptr[j] = '\0';
	return (ptr);
}
