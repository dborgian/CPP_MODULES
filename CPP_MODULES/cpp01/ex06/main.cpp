/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:48:18 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/16 14:27:29 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl test;
	std::string input;

	if (argc != 2)
	{
		std::cout << "Wrong arguments" << std::endl;
		return 1;
	}
	input = argv[1];
	test.complain(input);
	return (0);
}