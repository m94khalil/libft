/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:35:25 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/23 12:23:43 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str || !s || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str = f(i, s[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
