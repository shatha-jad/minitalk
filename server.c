/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:24:11 by sjadalla          #+#    #+#             */
/*   Updated: 2022/08/20 21:54:31 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include <signal.h>
// #include <sys/types.h>

void	get_id(void)
{
	pid_t	pid;

	pid = getpid();
	if (pid < 0)
	{
		ft_putstr_fd("Error! Failed to give ID to the server", 1);
		exit(1);
	}
	ft_putstr_fd("Server PID is : ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
}

void	sig_reciever(int sig)
{
	static int	i;
	static char	c;

	if (sig == SIGUSR1)
		c = (c << 1) | 1;
	else if (sig == SIGUSR2)
		c = (c << 1) | 0;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(c, 1);
		i = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	get_id();
	if (argc == 1)
	{
		signal(SIGUSR1, sig_reciever);
		signal (SIGUSR2, sig_reciever);
		while (1)
			pause ();
	}
	else
		ft_putendl_fd("Wrong number of arguments at server ", 1);
	return (EXIT_SUCCESS);
}
