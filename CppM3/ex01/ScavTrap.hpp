#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	private:
	
	public:
		ScavTrap(void);
		ScavTrap(std::string str_name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);
		ScavTrap&	operator = (const ScavTrap& other);
		void		guardGate(void) const;
			
};

#endif

