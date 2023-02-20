#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	~ClapTrap();
	void	setHp(unsigned int amount);
	int		getHp(void);
	void	setEp(unsigned int amount);
	int		getEp(void);
	void	setAttackDamage(unsigned int amount);
	int		getAttackDamage(void);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap &operator=(ClapTrap& clap);

private:
	std::string name;
	int hp;
	int ep;	
	int attackDamage;
};

#endif