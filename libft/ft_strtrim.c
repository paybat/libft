/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:23:44 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/09 18:09:47 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_existe(char const c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	size_t	i;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0' || *set == '\0')
		return (ft_strdup(s1));
	debut = 0;
	fin = ft_strlen(s1) - 1;
	i = 0;
	while (s1[debut] && is_existe(s1[debut], set))
		debut++;
	while (debut < fin && is_existe(s1[fin], set))
		fin--;
	if (debut > fin)
		return (ft_strdup(""));
	p = (char *)malloc((fin - debut + 2) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (debut <= fin)
		p[i++] = s1[debut++];
	return (p[i] = 0, p);
}
