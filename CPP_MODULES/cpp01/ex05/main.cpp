/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:48:18 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:48:19 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;
	std::string input;

	std::cout << "What message do you want? " << std::endl;
	std::cin >> input;
	test.complain(input);
	return (0);
}