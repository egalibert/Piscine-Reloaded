/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:34:33 by egaliber          #+#    #+#             */
/*   Updated: 2021/11/02 12:18:46 by egaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/uio.h>

#define BUF_SIZE 2048

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		open_file;
	char	buffer[BUF_SIZE + 1];

	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(2, "File name missing.\n", 19);
	else
	{
		open_file = open(argv[1], O_RDONLY);
		while (read(open_file, buffer, BUF_SIZE))
		{
			ft_putstr(buffer);
		}
	}
	return (0);
}
