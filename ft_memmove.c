/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:42:03 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:32:29 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!d && !s)
		return (NULL);
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
	{
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
