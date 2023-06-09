/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:32:30 by hcremers          #+#    #+#             */
/*   Updated: 2022/07/29 01:19:52 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*r;
	int			i;

	i = 0;
	if (!c)
	{
		r = s + ft_strlen(s);
		return ((char *)r);
	}
	while (s && s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			r = s + i;
			return ((char *)r);
		}
		else
			i++;
	}
	return (0);
}
