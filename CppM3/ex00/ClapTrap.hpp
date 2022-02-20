#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap{

private:
	std::string	Name;
	int			Hitpoints;
	int			Energypoints;
	int			Attackdamage;

public:
	ClapTrap(void);
	ClapTrap(std::string str_name);
	ClapTrap(const ClapTrap& other);
	~ClapTrap(void);
	ClapTrap&	operator = (const ClapTrap& other);

	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int			getHitpoints(void) const;
	int			getEnergy(void) const;
	int			getAttack(void) const;
	void		printAttr(void) const;
	void		setName(std::string str_name);
	void		setHitpoints(int num);
	void		setEnergy(int num);
	void		setAttack(int num);
	void		setAttr(int h, int e, int a);
};

#endif
