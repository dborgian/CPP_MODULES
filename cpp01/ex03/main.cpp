#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("club");
		Weapon axe = Weapon("axe");
		HumanA bob("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.setWeapon(axe);
		bob.attack();
	}
	{
		Weapon club = Weapon("club");
		Weapon axe = Weapon("axe");
		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		jim.setWeapon(axe);
		club.setType("some other type of club");
		jim.attack();
	}
}