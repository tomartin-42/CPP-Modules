#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	horde;

	if (N > 1)
	{
		horde = new Zombie[N];
		if (!horde)
			return(NULL);
		for (int i=0; i < N; i++)
		{
			std::string	aux;
		
			aux = name;
			aux += std::to_string(i);
			horde[i].set_name(aux);
			horde[i].announce();
		}
		return(horde);
	}
	return(NULL);
}
