#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include <algorithm>
#include <vector>

class Span{
	unsigned int		_numberOfMaxElem;
	std::vector<int>	_values;
	Span();

public :
	virtual ~Span();
	Span(Span const &);
	Span(unsigned int numberOfElemMax);

	void			addNumber(int values);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	unsigned int		getNumberOfMaxElem() const;
	std::vector<int>	getValues()const;

	Span& operator=(Span const &);

};

std::ostream& operator<<(std::ostream&, Span const &);

#endif