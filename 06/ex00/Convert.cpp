#include "Convert.hpp"

Convert::Convert(char charVal) : _charVal(charVal), _doubleVal(0){
	// std::cout << "Constructor <char> called" << std::endl;
}
Convert::Convert(double doubleVal) : _charVal(0), _doubleVal(doubleVal){
	// std::cout << "Constructor <double> called" << std::endl;
}

Convert::Convert(Convert const & src){
    this->operator=(src);
}

Convert::~Convert(void){
	// std::cout << "Destructor called" << std::endl;
}

Convert & Convert::operator=(Convert const & rhs){
	this->_charVal = rhs.getChar();
	this->_doubleVal = rhs.getDouble();
    return (*this);
}

static void displayChar(Convert const & rhs){
	char var;
	var = static_cast<char>(rhs.getDouble());
	if (isprint(var)){
		if (rhs.getDouble() < 128)
			std::cout << "'" << var << "'" ;
		else
			std::cout << "impossible";
	}
	else if (rhs.getDouble() != 0 && var == 0)
		std::cout << "impossible";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

static void displayInt(Convert const & rhs){
	if (rhs.getDouble() < std::numeric_limits<int>::min() || rhs.getDouble() > std::numeric_limits<int>::max() || rhs.getDouble() != rhs.getDouble())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(rhs.getDouble());
	std::cout << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Convert const & rhs){
	if (rhs.getChar()){
		o << std::setw(7) << std::left << "char"	<< std::setw(2) << ":" << "'" << rhs.getChar() << "'" << std::endl;
		o << std::setw(7) << std::left << "int"		<< std::setw(2) << ":" << static_cast<int>(rhs.getChar()) << std::endl;
		o << std::setw(7) << std::left << "float"	<< std::setw(2) << ":" << std::fixed << std::setprecision(1) << static_cast<float>(rhs.getChar()) << "f" << std::endl;
		o << std::setw(7) << std::left << "double"	<< std::setw(2) << ":" << std::fixed << std::setprecision(1) << static_cast<double>(rhs.getChar())<< std::endl;
	} else {
		o << std::setw(7) << std::left << "char"	<< std::setw(2) << ":";
		displayChar(rhs);
		o << std::setw(7) << std::left << "int"		<< std::setw(2) << ":";
		displayInt(rhs);
		o << std::setw(7) << std::left << "float"	<< std::setw(2) << ":" << std::fixed << std::setprecision(1) << static_cast<float>(rhs.getDouble()) << "f" << std::endl;
		o << std::setw(7) << std::left << "double"	<< std::setw(2) << ":" << std::fixed << std::setprecision(1) << rhs.getDouble() << std::endl;
	}
	return o;
}
