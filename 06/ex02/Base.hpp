#ifndef BASE_H
# define BASE_H

#include <iostream>
#include <string>
#include <iomanip>

class Base {

public:
	virtual ~Base() {};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};



#endif