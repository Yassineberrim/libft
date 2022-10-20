/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:48:30 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/11 15:08:46 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!haystack && !needle) || ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && needle[j] && haystack[i + j] == needle[j])
				j++;
			if (j == ft_strlen(needle))
				return ((char *)(&haystack[i]));
		}
		i++;
	}
	return (NULL);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char haystack[] = "ppYassineberrim";
// 	char needle[] = "Ya";
// 	printf("str : %s", strnstr(haystack , needle ,4));
// 	return (0);
// }