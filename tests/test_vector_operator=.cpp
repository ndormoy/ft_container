#include "vector.hpp"
#include <vector>

int	main()
{
	std::vector<int> test;
	std::vector<int> another_test;

	test.push_back(1);
    test.push_back(2);
	test.push_back(3);
    test.push_back(4);

	another_test.push_back(60);
	another_test.push_back(61);
	another_test.push_back(62);
	another_test.push_back(63);

	test = another_test;

	ft::vector<int> my_test;
	ft::vector<int> my_another_test;

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);
	my_test.push_back(4);

	my_another_test.push_back(60);
	my_another_test.push_back(61);
	my_another_test.push_back(62);
	my_another_test.push_back(63);

	my_test = my_another_test;

	std::cout << "------------ TEST VECTOR OPERATOR= -------------------" << std::endl;

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