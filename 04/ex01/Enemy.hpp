#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <string>
#include <iomanip>

class Enemy {

public:

	Enemy(void);
	Enemy(Enemy const & src);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();

	Enemy & operator=(Enemy const & rhs);

	std::string const getType() const;
	int getHP() const;

	virtual void takeDamage(int);

protected:
	void		setHp(int hp);
	void		setType(std::string type);

	int			_hp;
	std::string	_type;

};

#endif