/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:53:46 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/14 11:12:53 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*hordeOfZombies;
	int		N;

	N  = 12;
	hordeOfZombies = zombieHorde(N, "bob");
	for (int i = 0; i < N; i++)
	{
		hordeOfZombies[i].announce();
	}
	delete[] hordeOfZombies;
	return (0);
}
