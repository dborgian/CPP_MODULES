/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:56:32 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:56:33 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int	main()
{
	ClapTrap ClapA("ClapA");

	ClapA.takeDamage(5);
	ClapA.beRepaired(3);
	ClapA.attack("gesus");
	ClapA.takeDamage(8);

}

