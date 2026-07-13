#include "Span.hpp"

Span::Span( unsigned int N ) : _N(N) {

}

Span::Span( const Span &copy ) {
	*this = copy;
}

Span::~Span( void ) {

}

Span &Span::operator=( const Span &src ) {
	if (this != &src) {
		this->_N = src._N;
		this->_arr = src._arr;
	}
}

void	Span::addNumber(int num) {
	if (_arr.size() == _N)
		throw	std::exception();
	_arr.push_back(num);
}

int	Span::shortestSpan() {
	if (_arr.size() < 2)
		throw TooFewNumbers();
}

int	Span::longestSpan() {
	if (_arr.size() < 2)
		throw TooFewNumbers();
}

const char	*Span::FullContainer::what() const throw() {
	return ("Cannot add number: Container Full");
}

const char	*Span::TooFewNumbers::what() const throw() {
	return ("Cannot evaluate span: Container lacks numbers");
}
