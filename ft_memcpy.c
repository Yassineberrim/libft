/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:28:24 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/19 17:13:02 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
// int main()
// {
// 	double  src[] = {5.55555,5.959666,5.6565656,2.258965,8.55555,2.58222,3.255};
// 	double   dst[50];
// 	ft_memcpy(dst , src,7*sizeof(double));
// 	printf("%f" ,dst[0]);
// }
