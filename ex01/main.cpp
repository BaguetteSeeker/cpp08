#include "Span.hpp"

int	main ( void ) {

	std::cout << "\n-------- Default Tests --------\n" << std::endl;

	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Container initialized → [6, 3, 17, 9, 11] " << std::endl;
		std::cout << "Longest span is: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span is: " << sp.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-------- Tests errors --------\n" << std::endl;
	try {
		Span test(2);

		std::cout << "Container declared → [empty]" << std::endl;
		try {
			std::cout << "Longest span: " << test.longestSpan() << std::endl;		
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		std::cout << "Adding two numbers: [1, 2]" << std::endl;
		test.addNumber(1);
		test.addNumber(2);
		
		std::cout << "Adding third number ↓" << std::endl;
		try {
			test.addNumber(99);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-------- Even numbers case --------\n" << std::endl;
	try {
		Span test(3);

		test.addNumber(2);
		test.addNumber(2);
		test.addNumber(2);
		std::cout << "Container initialized → [2, 2, 2]" << std::endl;
		std::cout << "Longest span is: " << test.longestSpan() << std::endl;
		std::cout << "Shortest span is: " << test.shortestSpan() << std::endl;

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	size_t	ctnrSiz = 2000;
	size_t	maxTest = 10000;
	std::cout << "\n-------- " << ctnrSiz << " test --------\n" << std::endl;
	try {
		Span test(ctnrSiz);
		std::vector<int> vecTst(ctnrSiz);
		std::cout << "→ Declared empty test Span and vecTst vector of size " << ctnrSiz << std::endl;

		std::cout << "→ Fill vecTst with numbers between 0 and " << maxTest << std::endl;
		srand(time(NULL));
		for (size_t i = 0; i < ctnrSiz; i++)
			vecTst[i] = rand() % maxTest;
		
		std::cout << "→ Adding vecTst numbers within test Span" << std::endl;
		test.addNumber(vecTst.begin(), vecTst.end());
		std::cout << "Longest span is: " << test.longestSpan() << std::endl;
		std::cout << "Shortest span is: " << test.shortestSpan() << std::endl;

		// std::cout << "\n-------- Print test._arr --------\n" << std::endl;
		// for (size_t i = 0; i < test.getArr().size(); i++)
		// 	std::cout << test.getArr()[i] << " ";
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}