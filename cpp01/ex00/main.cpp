#include "Zombie.hpp"

int main(){

	Zombie *heapZombie = NewZombie("heap Zombie");
   	Zombie ballanzumba("aoo");

	ballanzumba.announce();
	heapZombie->announce();
	randomChump("stack Zombie");

	delete heapZombie;
	return 0;

}