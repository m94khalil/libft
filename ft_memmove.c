/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:32:50 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/23 11:32:52 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ps;
	unsigned char	*pd;

	if (!dest || !src)
		return (0);
	ps = (unsigned char *)(src);
	pd = (unsigned char *)(dest);
	i = 0;
	if (pd < ps)
		while (i < n)
			pd[i] = ps[i++];
	else
		while (n-- > 0)
			pd[n] = ps[i];
	return ((void *)pd);
}