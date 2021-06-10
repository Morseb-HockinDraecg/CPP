#include "Convert.hpp"

void	convertString (std::string const s) {
	double 				doubleVal;
	Convert 			*c = NULL;
	char				*ret;

	if (s == "nan" || s == "nanf"){
		doubleVal = std::numeric_limits<double>::quiet_NaN();
		// doubleVal = std::numeric_limits<double>::signaling_NaN();
		c = new Convert(doubleVal);
	} else if (s == "-inf" || s == "-inff"){
		doubleVal = - std::numeric_limits<double>::infinity();
		c = new Convert(doubleVal);
	} else if (s == "+inf" || s == "+inff"){
		doubleVal = std::numeric_limits<double>::infinity();
		c = new Convert(doubleVal);
	} else if (s.length() == 1 && isprint(s[0]) && !isdigit(s[0])) {
		c = new Convert(s[0]);
	} else{
		doubleVal = strtod(&s[0], &ret);
		try {
			if (!*ret || (*ret == 'f' && !(*(ret + 1))))
				c = new Convert(doubleVal);
			else
				throw std::exception();
		} catch (std::exception &e){
			std::cout << "Type unknow... Can't convert." << std::endl;
		}
	}


	if (c)
		std::cout << *c;

	delete c;
}

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Need an argument." << std::endl;
		return 1;
	}
	convertString(argv[1]);

	return 0;
}
