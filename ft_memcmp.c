/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:45:10 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/08 12:42:10 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*c;
	size_t			i;

	i = 0;
	p = (unsigned char *)s1;
	c = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != c[i])
			return (p[i] - c[i]);
		i++;
	}
	return (0);
}
//  #include<stdio.h>
//  int main()
//  {
// 		char src[] = "Yasscne";
// 		char dst[] = "Yassine";
// 		printf("%d",ft_memcmp(dst ,src ,8));
//  }