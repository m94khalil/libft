/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:35:09 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/23 12:23:39 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (dst == 0 || src == 0)
		return (0);
	i = 0;
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (n > 0)
		dst[i] = 0;
	return (ft_strlen(src));
}
