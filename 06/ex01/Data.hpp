#ifndef DATA_H
# define DATA_H

#include <iostream>
#include <string>
#include <iomanip>

class Data {

public:

	Data();
	Data(Data const & src);
	~Data();

	Data & operator=(Data const & rhs);

	std::string*	getS1() {return this->_s1;}
	std::string*	getS2() {return this->_s2;}
	int*			getInt() {return this->_i;}

private:
	std::string *	_s1;
	int*			_i;
	std::string*	_s2;

};

#endif