/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:13:42 by hcremers          #+#    #+#             */
/*   Updated: 2022/07/29 01:19:52 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		i1;
	int		i2;
	char	*p;

	i = 0;
	i1 = 0;
	i2 = 0;
	if (!s1)
		return (0);
	p = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!p)
		return (0);
	while (i < ft_strlen((char *)s1))
		p[i++] = s1[i1++];
	while (i < ft_strlen((char *)s1) + ft_strlen((char *)s2))
		p[i++] = s2[i2++];
	p[i] = '\0';
	return (p);
}
