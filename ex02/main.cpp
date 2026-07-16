#include "MutantStack.hpp"

int	main ( void ) {

	{
		std::cout << "\n-------- Default Tests --------\n" << std::endl;
		
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);

		std::cout << "\n-------- List Test --------\n" << std::endl;
		{
			std::list<int> mlist;
			mlist.push_back(5);
			mlist.push_back(17);
			std::cout << mlist.back() << std::endl;
			mlist.pop_back();
			std::cout << mlist.size() << std::endl;
			mlist.push_back(3);
			mlist.push_back(5);
			mlist.push_back(737);
			//[...]
			mlist.push_back(0);
			std::list<int>::iterator it = mlist.begin();
			std::list<int>::iterator ite = mlist.end();
			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
			std::list<int> s(mlist);

		}

		std::cout << "\n-------- Const & Copy Tests --------\n" << std::endl;
		{
			const MutantStack<int> mutantConstCopy(mstack);
			MutantStack<int>::const_iterator it2 = mutantConstCopy.begin();

			while (it2 != mutantConstCopy.end())
			{
				std::cout << *it2 << std::endl;
				++it2;
			}
		}
		
		std::cout << "\n-------- Assignement & Reverse Tests --------\n" << std::endl;
		{
			MutantStack<int> mutanReversed = mstack;
			MutantStack<int>::reverse_iterator it2 = mutanReversed.rbegin();

			while (it2 != mutanReversed.rend())
			{
				std::cout << *it2 << std::endl;
				++it2;
			}
		}		
	}

	
	return 0;

}