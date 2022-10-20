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

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);
	my_test.push_back(4);
	my_test.push_back(5);
	my_test.push_back(6);
	my_test.push_back(7);

    
	std::vector<int>::iterator it = test.begin();

	ft::vector<int>::iterator my_it = my_test.begin();

	test.insert(it, 50);
	test.insert(it + 3, 100);

	my_test.insert(my_it, 50);
	my_test.insert(my_it + 3, 100);

	std::cout << "REAL TEST" << std::endl;

	for (std::vector<int>::iterator it = test.begin(); it != test.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << test.size() << std::endl;
	std::cout << "Capacity = " << test.capacity() << std::endl;
	std::cout << "begin = " << test.begin()[0] << std::endl;

	std::cout << "MY TEST" << std::endl;

	for (ft::vector<int>::iterator my_it = my_test.begin(); my_it != my_test.end(); ++my_it)
		std::cout << *my_it << std::endl;
	std::cout << "Size = " << my_test.size() << std::endl;
	std::cout << "Capacity = " << my_test.capacity() << std::endl;
	std::cout << "begin = " << my_test.begin()[0] << std::endl;
}