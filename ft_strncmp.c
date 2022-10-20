/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:35:31 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/18 14:52:31 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*y;
	unsigned char	*p;

	i = 0;
	y = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while (i < n && (p[i] != '\0' || y[i] != '\0'))
	{
		if (y[i] != p[i])
			return (y[i] - p[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char str[] = "Hellobaby";
// 	char strr[] = "HellObaby";
// 	printf("%d", ft_strncmp(str, strr, 6));
// }