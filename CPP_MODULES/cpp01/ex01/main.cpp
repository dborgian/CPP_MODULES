/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:33 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/16 14:29:26 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main(int argc, char **argv){

    std::string argvio;
    Zombie *zombies;
    int argcint;
    if (argc > 1)
    {
        argcint =  atoi(argv[1]);
        if (argcint < 0)
        {
            std::cout << "Pls only positive numbers" << std::endl;
            return 1;
        }
        argvio = argv[2];
    }
    
    zombies = zombieHorde(argcint, argvio);
    
    for (int i = 0; i < argcint; ++i)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}