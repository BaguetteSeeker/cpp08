#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>
# include <deque>

void	print(const int &i) {
	std::cout << i << ' ';
}

template<typename T>
typename T::const_iterator	easyfind(T &container, int num) {
	typename T::const_iterator	it;

	std::for_each(container.begin(), container.end(), print);
	std::cout << std::endl;
	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif