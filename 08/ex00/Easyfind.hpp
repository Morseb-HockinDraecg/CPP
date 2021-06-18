#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <string>
#include <iomanip>

#include <algorithm>
#include<iterator>

#include <vector>
#include <list>
#include <deque>

template <typename T>
void easyfind(T const & c, int i){
	typename T::const_iterator location;
	location = std::find( c.begin(), c.end(), i);

	if ( location != c.end() ){
		std::cout << "\033[32mFound "<< i << " at location " << std::distance(c.begin(), location) << "\033[0m" << std::endl;
	} else {
		std::cout << "\033[31m" << i << " not found\033[0m" << std::endl;
		throw std::exception();
	}
}

#endif