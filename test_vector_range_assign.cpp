#include "vector.hpp"
#include <vector>

int	main()
{
	std::vector<int> test;

	test.push_back(1);
	test.push_back(2);
	test.push_back(3);

	std::vector<int> other_test;

	other_test.push_back(10);
	other_test.push_back(20);
	// other_test.push_back(30);
	// other_test.push_back(40);
	// other_test.push_back(50);

	ft::vector<int> my_test;

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);

	ft::vector<int> my_other_test;

	my_other_test.push_back(10);
	my_other_test.push_back(20);

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

	test.assign(other_test.begin(), other_test.end());

	my_test.assign(my_other_test.begin(), my_other_test.end());

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