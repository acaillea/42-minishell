/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:09:24 by acaillea          #+#    #+#             */
/*   Updated: 2022/07/07 17:18:24 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

/*	---------------------------------------------------------
	Specific fonction to handle the "-nnnnnnn..." flag
	composition.
	---------------------------------------------------------	*/

int	flag_n(char *str)
{
	int	i;

	if (!str)
		return (-19);
	i = 0;
	if (str[i] != '-')
		return (-19);
	while (str[++i] && str[i] == 'n')
		;
	if (i < ft_strlen(str) - 1)
		return (-19);
	return (0);
}

/*	---------------------------------------------------------
	Writing option for echo if the string is between severals
	quotes.
	---------------------------------------------------------	*/

void	write_w_quotes(char *str)
{
	int	i;
	int	len;

	i = 0;
	if (str[i] == '\"')
		while (str[++i] == '\"')
			;
	else if (str[i] == '\'')
		while (str[++i] == '\'')
			;
	len = ft_strlen(str) - i - 1;
	while (i <= len)
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*	--------------------------------------------------------------------------
**	Reproduce 'echo' built-in command's behaviour:
**	Write the string(s) passed as argument(s) on stdout
**	The '-n' option prevents the function from printing the ending newline
**	character
**	-----------------------------------------------------------------------	*/

void	ft_echo(char **pars_tab)
{
	int	i;

	i = 1;
	while (!ft_strlcmp(pars_tab[i], "-n") || !flag_n(pars_tab[i]))
		i++;
	while (pars_tab[i])
	{
		write_w_quotes(pars_tab[i]);
		i++;
		if (pars_tab[i])
			ft_putchar_fd(' ', 1);
	}
	if (ft_strlcmp(pars_tab[1], "-n") && flag_n(pars_tab[1]))
		ft_putchar_fd('\n', 1);
	g_d.error_code = 0;
}
