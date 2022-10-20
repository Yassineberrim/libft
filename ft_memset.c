/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:47:06 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/18 13:49:22 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	y;
	size_t			i;

	p = (unsigned char *)b;
	y = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		p[i] = y;
		i++;
	}
	return (b);
}
// int main()
// {
// 	char str[] = "Yassineberrim";
// 	char c = 'a';
// 	printf("%s", ft_memset(str, c , 3));
// }
