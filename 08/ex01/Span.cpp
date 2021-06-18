#include "Span.hpp"


// --- Construtor  - Destructor ---
Span::Span(unsigned int N) : _numberOfMaxElem(N){
}

Span::Span(Span const & src){
	*this = src;
}

Span::~Span(){
}

// --- functions

	void	Span::addNumber(int v){
		if (this->_values.size() >= this->_numberOfMaxElem){
			std::cout << "\e[31m" << "number of max elem reach" << "\e[0m" << std::endl;
			throw std::exception();
			return ;
		}
		std::cout << "\e[32m" << "addNumber" << "\e[0m" << std::endl;
		this->_values.push_back(v);
	}

	unsigned int	Span::longestSpan(){
		if (this->_values.size() < 2){
			std::cout << "\e[31m" << "no numbers stored, or only one : no span to find"  << "\e[0m" << std::endl;
			throw std::exception();
		}
			std::vector<int>::iterator it = this->_values.begin();
		std::vector<int>::iterator ite = this->_values.end();
		int min = *it;
		int max = *it;
		std::cout << "\e[35m" << "longestSpan" << "\e[0m" << std::endl;

		while (it != ite){
			if (*it > max)
				max = *it;
			if (*it < min)
				min = *it;
			it++;
		}
		// std::cout << min <<  "  " << max << std::endl;
		return (max  - min);
	}

	unsigned int	Span::shortestSpan(){
		int	shortestSpan = INT_MAX;
		std::vector<int>	tmp = this->_values;
		std::cout << "\e[33m" << "shortestSpan" << "\e[0m" << std::endl;
		if (this->_values.size() < 2){
			std::cout << "\e[31m" << "no numbers stored, or only one : no span to find"  << "\e[0m" << std::endl;
			throw std::exception();
		}
		std::sort(tmp.begin(), tmp.end());
		
		std::vector<int>::iterator	it;
		for (it = tmp.begin() + 1; it < tmp.end(); ++it){
			if (*it - *(it - 1) < shortestSpan)
				shortestSpan = *it - *(it - 1);
			// std::cout << *(it - 1) << "  " << *it  << " : " << *it - *(it - 1) << std::endl;
		}

		return shortestSpan;
	}


// --- Operator

Span& Span::operator=(Span const & rhs){
	this->_numberOfMaxElem = rhs.getNumberOfMaxElem();
	this->_values = rhs.getValues();
	return *this;
}

std::ostream& operator<<(std::ostream& o , Span const & rhs){
	std::vector<int>	values = rhs.getValues();

	o << "\e[36m";
	o << rhs.getNumberOfMaxElem() << " elements max." << std::endl;
	if (values.empty()){
		o << "no element found";
	} else {
	std::vector<int>::iterator	it;
		o << "current elements : ";
		for (it = values.begin(); it < values.end(); ++it)
			o << *it << " ";
	}
	o << "\e[0m" << std::endl;
	return o;
}


// --- Getter

unsigned int	Span::getNumberOfMaxElem() const{
	return this->_numberOfMaxElem;
}

std::vector<int>	Span::getValues() const{
	return this->_values;
}
