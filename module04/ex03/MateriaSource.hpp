#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public :
	MateriaSource();
	explicit MateriaSource(const MateriaSource &obj);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource &obj);
	void learnMateria(AMateria* am);
	AMateria* createMateria(std::string const &type);
	AMateria* getMateria(int idx) const;
	int	getCount() const;
private:
	int	count;
	AMateria* am[4];
};

#endif