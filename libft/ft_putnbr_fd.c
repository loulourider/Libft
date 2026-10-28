/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 09:22:28 by username         #+#    #+#              */
/*   Updated: 2026/10/26 09:34:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0 && !(n == -2147483648))
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * (-1), fd);
	}
	if (n >= 0 && n < 10 && !(n == -2147483648))
	{
		ft_putchar_fd('0' + n, fd);
	}
	if (n > 9 && !(n == -2147483648))
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(7, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(42, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-42, 2);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }