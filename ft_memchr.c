/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:40:12 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/17 22:33:17 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*x;
	size_t	i;

	i = 0;
	x = (char *)str;
	while (i < n)
	{
		if (x[i] == (char)c)
			return (&x[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char c[] = "Yassine";
// 	char x= 's';
// 	printf("%s", ft_memchr(c,x,3));
// }