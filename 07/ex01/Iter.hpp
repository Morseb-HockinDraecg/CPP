#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>
#include <iomanip>

template <typename T, size_t N >
void iter(T (*x)[N], size_t n, void (*U)(T *)){
	n++;
	while (n--){
		// std::cout << x[0][n] << "   ";
		U(&x[0][n]);
		// std::cout << x[0][n] << std::endl;
	}
}

template <typename T>
void addOne(T* i){
	*i += 1;
}

void hideLastChar(std::string* s){
	(*s)[s->length() - 1] = ' ';
}

#endif