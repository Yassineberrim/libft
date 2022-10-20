/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:56:26 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/09 17:53:31 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
// #include<stdio.h>
// int main()
// {
// 	char str[50] = "Yassine";
// 	ft_bzero(str,4);
// 	printf("%c",str[9]);
//  	return (0);
// }