/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:09:12 by acoezard          #+#    #+#             */
/*   Updated: 2022/05/20 22:03:48 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;

	nl = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl > 100)
		ft_putnbr_fd(nl / 10, fd);
	else if ((nl / 10) > 0)
		ft_putchar_fd((nl / 10) + '0', fd);
	ft_putchar_fd((nl % 10) + '0', fd);
}
