/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:31:41 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:33:46 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

static int	ft_numlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	ft_unsigned(unsigned int num)
{
	char	*str;
	int		len;

	if (num == 0)
		return (ft_putchar('0'));
	len = ft_numlen(num);
	str = malloc (len + 1);
	if (!str)
		return (-1);
	str[len] = '\0';
	len--;
	while (num)
	{
		str[len] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	if (ft_putstr(str) == -1)
	{
		free (str);
		return (-1);
	}
	len = ft_strlen(str);
	free (str);
	return (len);
}
