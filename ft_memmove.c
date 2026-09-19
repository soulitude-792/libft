/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imigdady <imigdady@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:58:15 by imigdady          #+#    #+#             */
/*   Updated: 2026/09/17 18:01:51 by imigdady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dst > sr)
	{
		while (n > 0)
		{
			n--;
			dst[n] = sr[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
