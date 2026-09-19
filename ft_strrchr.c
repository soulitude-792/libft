/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imigdady <imigdady@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:19:00 by imigdady          #+#    #+#             */
/*   Updated: 2026/09/17 18:19:08 by imigdady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_match;

	last_match = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_match = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (last_match);
}
