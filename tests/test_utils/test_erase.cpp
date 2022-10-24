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
    test.push_back(6);
	test.push_back(7);
    test.push_back(8);
	test.push_back(9);
	test.push_back(10);


	my_test.push_back(1);
    my_test.push_back(2);
	my_test.push_back(3);
    my_test.push_back(4);
	my_test.push_back(5);
	my_test.push_back(6);
	my_test.push_back(7);
	my_test.push_back(8);
	my_test.push_back(9);
	my_test.push_back(10);

	std::vector<int>::iterator it = test.begin();

	ft::vector<int>::iterator my_it = my_test.begin();

	// En gros erase de pos 6 a pos 9
	test.erase(it + 5, it + 8);
	test.erase(it + 2);

	my_test.erase(my_it + 5, my_it + 8);
	my_test.erase(my_it + 2);

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