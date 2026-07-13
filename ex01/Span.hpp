#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <vector>
# include <deque>
# include <algorithm>

// template<typename T>
class Span {

	private:
		unsigned int		_N;
		std::vector<int>	_arr;
		Span( void );

	public:
		Span( unsigned int _N );
		Span( Span const &copy );
		~Span( void );
		Span &operator=(const Span &src);

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

		// Exceptions
		class FullContainer : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class TooFewNumbers : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
