/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:00:38 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/19 23:04:29 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*i;
	char	*x;
	size_t	t;
	size_t	p;

	i = (char *)dst;
	x = (char *)src;
	p = len - 1;
	t = 0;
	if (dst > src)
	{
		while (t < len)
		{
			i[p] = x[p];
			p--;
			t++;
		}
	}
	else
		i = ft_memcpy(dst, src, len);
	return (i);
}
// int main()
// {
// 	char str[] = "future1337";
// 	printf("%s",ft_memmove(str+3 , str, 3));
// }