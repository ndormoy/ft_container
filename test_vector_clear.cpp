#include "vector.hpp"
#include <vector>

int main()
{
	std::vector<int> test;

	ft::vector<int> my_test;

	test.push_back(1);
	test.push_back(2);
    test.push_back(3);
	test.push_back(4);
    test.push_back(5);

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);
	my_test.push_back(4);
	my_test.push_back(5);

	test.clear();
	my_test.clear();

	std::cout << "REAL TEST" << std::endl;

	for (std::vector<int>::iterator it = test.begin(); it != test.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << test.size() << std::endl;
	std::cout << "Capacity = " << test.capacity() << std::endl;

	std::cout << "MY TEST" << std::endl;

	for (ft::vector<int>::iterator it = my_test.begin(); it != my_test.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << my_test.size() << std::endl;
	std::cout << "Capacity = " << my_test.capacity() << std::endl;
}