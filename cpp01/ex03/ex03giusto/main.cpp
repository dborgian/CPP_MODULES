#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA Bob("bob", club);
		Bob.attack();
		club.setType("some other type of club");
		Bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}