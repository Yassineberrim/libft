/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:50:32 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/19 16:56:02 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*xtx;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	xtx = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!xtx)
		return (NULL);
	ft_strlcpy(xtx, s1, len_s1 + 1);
	ft_strlcat(xtx, s2, len_s1 + len_s2 + 1);
	return (xtx);
}

// int main()
// {
// 	// char d[10] = "Yassine";
// 	char s1[10] = "berrim";
// 	char s2[10] = "Yassine";
// 	printf("%s\n", ft_strjoin(s1 , s2));
// 	// printf("%s", d);
// }
