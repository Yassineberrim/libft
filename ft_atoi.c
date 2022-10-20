/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:58:11 by yberrim           #+#    #+#             */
/*   Updated: 2022/10/19 23:04:43 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	nb;

	nb = 0;
	sign = 1;
	i = 0;
	if (!(str[i]))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		nb = (nb * 10) + (str[i++] - '0');
	return (nb * sign);
}
// int main(void)
// {
// 	char *s = "     -366";
// 	printf("%d", ft_atoi(s));
// }