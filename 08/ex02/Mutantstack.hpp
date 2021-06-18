#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack: public std::stack<T> {

public:
	MutantStack();
	MutantStack(MutantStack const &);
	virtual ~MutantStack();

	MutantStack & operator=(MutantStack const &);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

};

// --- canonical form class ---
template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>(){
}
template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src): std::stack<T>(src){
	*this = src;
}
template<typename T>
MutantStack<T>::~MutantStack(){
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs){
	this->std::stack<T>::operator=(rhs);
	return *this;
}


// functions
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return std::begin(std::stack<T>::c);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return std::stack<T>::c.end();
}

#endif