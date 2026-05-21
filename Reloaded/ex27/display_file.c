/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 09:51:42 by dilferre          #+#    #+#             */
/*   Updated: 2026/05/19 13:37:52 by dilferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_error(int ac)
{
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int		fd;
	int		bufr;
	char	buf[1];

	if (ft_error(ac) == 0)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	bufr = read(fd, buf, 1);
	while (bufr > 0)
	{
		write(1, buf, 1);
		bufr = read(fd, buf, 1);
	}
	close(fd);
	return (0);
}
