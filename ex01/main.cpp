#include "Span.hpp"

int	main ( void ) {
	Span test(3);

	test.addNumber(2);
	test.addNumber(1);
	test.addNumber(3);

	std::cout << "\n-------- Tests --------\n" << std::endl;
	try {

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
}