#include "vector.hpp"
#include <vector>

int main()
{

	std::vector<int> test;

	test.push_back(1);
    test.push_back(2);
	test.push_back(3);
    test.push_back(4);

	std::vector<int>::iterator it = test.begin();

	// test.insert(it + 1, 100, 66);
	test.insert(it + 1, 5, 66);

	ft::vector<int> my_test;

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);
	my_test.push_back(4);

	ft::vector<int>::iterator my_it = my_test.begin();

	// my_test.insert(my_it + 1, 100 , 66);
	my_test.insert(my_it + 1, 5, 66);

	std::cout << "-------------TEST INSERT FILL-------------------------" << std::endl;

	std::cout << "REAL" << std::endl;
	

	for (std::vector<int>::iterator o_it = test.begin(); o_it != test.end(); o_it++)
		std::cout << *o_it << std::endl;
	std::cout << "Size = " << test.size() << std::endl;
	std::cout << "Capacity = " << test.capacity() << std::endl;
	std::cout << "begin = " << test.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "MYTEST" << std::endl;

	for (ft::vector<int>::iterator it = my_test.begin(); it != my_test.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << my_test.size() << std::endl;
	std::cout << "Capacity = " << my_test.capacity() << std::endl;
	std::cout << "begin = " << my_test.begin()[0] << std::endl;
}