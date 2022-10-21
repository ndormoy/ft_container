#include "vector.hpp"
#include <vector>

int main()
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

	std::vector<int>::iterator it = test.begin();

	test.insert(it + 1, another_test.begin(), another_test.end() - 1);

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

	ft::vector<int>::iterator my_it = my_test.begin();
	
	my_test.insert(my_it + 1, my_another_test.begin(), my_another_test.end() - 1);

	

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