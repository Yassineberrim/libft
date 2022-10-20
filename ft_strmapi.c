/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:17:38 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/19 17:20:23 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*xtx;

	i = 0;
	xtx = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !f)
		return (0);
	if (!xtx)
		return (NULL);
	while (i < ft_strlen(s))
	{
		xtx[i] = f(i, s[i]);
		i++;
	}
	xtx[i] = '\0';
	return (xtx);
}

// char function_test(unsigned int c , char str)
// {
// 	return (str - 32);
// }

// int main()
// {
// 	char str[]="cuyuy";
// 	printf("%s", ft_strmapi(str, function_test));
// }