/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:10:43 by sjadalla          #+#    #+#             */
/*   Updated: 2022/08/20 21:52:56 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include <signal.h>

void	check_pid(char *sig)
{
	int	i;

	i = 0;
	while (sig[i])
	{
		if (ft_isdigit(sig[i]))
			i++;
		else
		{
			ft_putstr_fd("ERROR!! Invalid PID", 2);
			exit (1);
		}
	}
}

void	sig_send(int pid, char c)
{
	int	i;
	int	j;

	i = 7;
	j = 0;
	while (i >= 0)
	{
		if ((c >> i & 1) == 1)
			j = kill(pid, SIGUSR1);
		else
			j = kill(pid, SIGUSR2);
		usleep(200);
		i--;
	}
	if (j == -1)
	{
		ft_putstr_fd("Kill function failed to connect. Check PID.\n", 2);
		exit (EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	i = 0;
	if (argc != 3)
	{
		ft_putstr_fd("Error!! Wrong number or arguments", 2);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	check_pid(argv[1]);
	if (pid > 2147483647 || pid <= 0)
	{
		ft_putstr_fd("Error!! Invalid PID", 2);
		exit(EXIT_FAILURE);
	}
	while (argv[2][i])
	{
		sig_send(pid, argv[2][i]);
		i++;
	}
	sig_send(pid, '\0');
	return (EXIT_SUCCESS);
}
