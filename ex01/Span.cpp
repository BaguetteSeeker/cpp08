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
	return (*this);
}

void	Span::addNumber(int num) {
	if (_arr.size() == _N)
		throw	FullContainer();
	_arr.push_back(num);
}

int	Span::shortestSpan() {
	if (_arr.size() < 2)
		throw TooFewNumbers();

	std::vector<int>	tmpArr = _arr;
	int					shortestDiff = 0;

	std::sort(tmpArr.begin(), tmpArr.end());
	shortestDiff = tmpArr[1] - tmpArr[0];
	for (size_t i = 1; i < tmpArr.size() - 1; i++)
	{
		if (tmpArr[i + 1] - tmpArr[i] < shortestDiff)
			shortestDiff = tmpArr[i + 1] - tmpArr[i];
	}

	return (shortestDiff);
}

int	Span::longestSpan() {
	if (_arr.size() < 2)
		throw TooFewNumbers();
	return (*std::max_element(_arr.begin(), _arr.end())
			- *std::min_element(_arr.begin(), _arr.end()));
}

std::vector<int>	Span::getArr( void ) const {
	return (this->_arr);
}

const char	*Span::FullContainer::what() const throw() {
	return ("Cannot add number: Container Full");
}

const char	*Span::TooFewNumbers::what() const throw() {
	return ("Cannot evaluate span: Container lacks numbers");
}
