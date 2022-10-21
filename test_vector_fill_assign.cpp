#include "vector.hpp"
#include <vector>

int	main()
{
	std::vector<int> test;

	test.push_back(1);
	test.push_back(2);
	test.push_back(3);

	ft::vector<int> my_test;

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);


	std::cout << "BEFORE" << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::cout << "REAL TEST"<< std::endl;

	for (std::vector<int>::iterator it = test.begin(); it != test.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << test.size() << std::endl;
	std::cout << "Capacity = " << test.capacity() << std::endl;
	std::cout << "begin = " << test.begin()[0] << "\n" << std::endl;

	std::cout << "MY TEST" << "\n" << std::endl;

	for (ft::vector<int>::iterator my_it = my_test.begin(); my_it != my_test.end(); ++my_it)
		std::cout << *my_it << std::endl;
	std::cout << "Size = " << my_test.size() << std::endl;
	std::cout << "Capacity = " << my_test.capacity() << std::endl;
	std::cout << "begin = " << my_test.begin()[0] << "\n" << std::endl;

	int pouet = 42;
	int	&ref = pouet;

	test.assign(4, ref);

	my_test.assign(4, ref);

	std::cout << "AFTER" << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::cout << "REAL TEST" << "\n" << std::endl;

	for (std::vector<int>::iterator it = test.begin(); it != test.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << test.size() << std::endl;
	std::cout << "Capacity = " << test.capacity() << std::endl;
	std::cout << "begin = " << test.begin()[0] << "\n" << std::endl;

	std::cout << "MY TEST" << "\n" << std::endl;

	for (ft::vector<int>::iterator my_it = my_test.begin(); my_it != my_test.end(); ++my_it)
		std::cout << *my_it << std::endl;
	std::cout << "Size = " << my_test.size() << std::endl;
	std::cout << "Capacity = " << my_test.capacity() << std::endl;
	std::cout << "begin = " << my_test.begin()[0] << std::endl;
}