/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:09 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/15 16:04:47 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie *heapZombie = NewZombie("heap Zombie");
   Zombie ballanzumba("");

    ballanzumba.announce();
    heapZombie->announce();
    randomChump("stack Zombie");

    delete heapZombie;
    return 0;

}