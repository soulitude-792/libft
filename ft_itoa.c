/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imigdady <imigdady@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:39:36 by imigdady          #+#    #+#             */
/*   Updated: 2026/09/17 17:29:39 by imigdady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	ln;
	char	*res;

	ln = n;
	len = get_len(ln);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (ln == 0)
		res[0] = '0';
	if (ln < 0)
	{
		res[0] = '-';
		ln = -ln;
	}
	while (ln > 0)
	{
		len--;
		res[len] = (ln % 10) + '0';
		ln /= 10;
	}
	return (res);
}
