/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:52:13 by hcremers          #+#    #+#             */
/*   Updated: 2022/07/29 01:19:52 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_str;
	char	*s2_str;
	size_t	i;

	if (!s1 || !s2)
		return (-1);
	s1_str = (char *)s1;
	s2_str = (char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1_str[i] && s2_str[i] && s1_str[i] == s2_str[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1_str[i] - (unsigned char)s2_str[i]);
}
