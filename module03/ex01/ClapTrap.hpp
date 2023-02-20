#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	virtual ~ClapTrap(void);
	void	setHp(unsigned int amount);
	unsigned int		getHp(void);
	void	setEp(unsigned int amount);
	unsigned int		getEp(void);
	void	setAttackDamage(unsigned int amount);
	unsigned int		getAttackDamage(void);
	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap &operator=(const ClapTrap& clap);

protected:
	std::string name;
	unsigned int hp;
	unsigned int ep;	
	unsigned int attackDamage;
};

#endif