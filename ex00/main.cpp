#include "easyfind.hpp"

int	main ( void ) {
	std::list<int> ctnrList;

	ctnrList.push_back(2);
	ctnrList.push_back(3);
	ctnrList.push_back(5);

	std::cout << "\n-------- List Tests --------\n" << std::endl;
	try {
		std::cout << "*Success* : Searching 2 in List ↓" << std::endl;
		easyfind(ctnrList, 2);
		std::cout << "*Error* : Searching 4 in List ↓" << std::endl;
		easyfind(ctnrList, 4);
	}
	catch(const std::exception& e) {
		std::cerr << "Value not found: " << e.what() << '\n';
	}
	
	std::cout << "\n-------- Vector Tests --------\n" << std::endl;

	std::vector<int>	ctnrVector;
	ctnrVector.push_back(1);
	ctnrVector.push_back(2);
	ctnrVector.push_back(4);

	try {
		std::cout << "*Success* : Searching 1 in Vector ↓" << std::endl;
		easyfind(ctnrVector, 2);
		std::cout << "*Error* : Searching 3 in Vector ↓" << std::endl;
		easyfind(ctnrVector, 3);
	}
	catch(const std::exception& e) {
		std::cerr << "Value not found: " << e.what() << '\n';
	}
}