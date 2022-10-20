/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:12:30 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/19 23:33:42 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int c)

{
	if (c > 0)
		return (c);
	return (c * -1);
}

static int	ft_len(long n)

{
	long	len;

	len = 0;
	if (n <= 0)
		len += 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = 48 + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_len(-4534534557));
// }