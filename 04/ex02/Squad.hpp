#ifndef SQUAD_H
# define SQUAD_H

#include <iostream>
#include <deque>
#include <string>
#include <iomanip>
#include "ISquad.hpp"

class Squad : public ISquad {

public:

	Squad()
		{}
	Squad(Squad const & src)
		{this->operator=(src);}
	virtual ~Squad();

 	int	getCount() const
	 	{return this->_squad.size() ;}
	int	push(ISpaceMarine* Marine)
		{this->_squad.push_back(Marine); return this->getCount();}
	ISpaceMarine*	getUnit(int n) const
		{if (n < 0) return (NULL); return this->_squad.operator[](n);}
	
	std::deque<ISpaceMarine*> getSquad() const
		{return this->_squad;}
	Squad & operator=(Squad const & rhs);

private:

	std::deque<ISpaceMarine*>	_squad;
};

#endif