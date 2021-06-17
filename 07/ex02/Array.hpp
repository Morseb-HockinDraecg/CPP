#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

template <typename T>
class Array {

	T *		rawArray;
	size_t	size;

public:

	Array();
	Array(unsigned int n);
	Array(Array const & src);
	~Array(void);

	size_t	getSize() const;
	T *		getRawArray() const ;

	Array<T> & operator=(Array const & rhs);
	T & operator[](size_t pos) const;

};

template <typename T>
std::ostream & operator<<(std::ostream & o, const Array<T> & array);


// ------ Implementation ----


// construc / destruc

template <typename T>
Array<T>::Array(): rawArray(new T[0]), size(0){
}

template <typename T>
Array<T>::Array(unsigned int n): rawArray(new T[n]), size(n){
	for (unsigned int i = 0; i < n; i++)
		this->rawArray[i] = T();
}

template <typename T>
Array<T>::Array(Array const & src): rawArray(new T[src.getSize()]), size(src.getSize()){
	size_t	sizeRhs = src.getSize();
	for (size_t i = 0; i < sizeRhs; i++)
		this->rawArray[i] = src.rawArray[i];
}

template <typename T>
Array<T>::~Array(){
	delete [] rawArray;
}


// Getters

template <typename T>
size_t	Array<T>::getSize() const{
	return this->size;
}

template <typename T>
T *	Array<T>::getRawArray() const{
	return this->rawArray;
}


// Operators

template <typename T>
T &	Array<T>::operator[](size_t pos) const{
	// if (pos >= this->size) throw std::out_of_range("array index out of range.");
	if (pos >= this->size) throw std::exception();
	return this->rawArray[pos];
}

template <typename T>
Array<T> &	Array<T>::operator=(Array const & rhs){
	size_t	sizeRhs = rhs.getSize();
	delete [] this->rawArray;
	this->rawArray = new T[sizeRhs];
	this->size = sizeRhs;
	for (size_t i = 0; i < sizeRhs; i++)
		this->rawArray[i] = rhs.rawArray[i];
	return *this;
}

template <typename T>
std::ostream &	operator<<(std::ostream & o, const Array<T> & array){
	o << "[";
	for (size_t i = 0; i < array.getSize(); i++){
		o << array[i];
		if (i < array.getSize() - 1)
			o << ", ";
	}
	o << "]";
	return o;
}

#endif