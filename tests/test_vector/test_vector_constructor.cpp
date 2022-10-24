#include <vector>
#include "vector.hpp"

int main()
{
	std::vector<int>	construct_default;
	std::vector<int>	construct_fill(4, 100);
	std::vector<int>    construct_range(construct_fill.begin(), construct_fill.end());
	std::vector<int>	construct_copy(construct_range);

	ft::vector<int>	my_construct_default;
	ft::vector<int>	my_construct_fill(4, 100);
	ft::vector<int>	my_construct_range(my_construct_fill.begin(), my_construct_fill.end());
	ft::vector<int>	my_construct_copy(my_construct_range);

	std::cout << "-------------TEST CONSTRUCTORS-------------------------" << std::endl;

	std::cout << "REAL : <Default constuctor> :" << std::endl;
	

	for (std::vector<int>::iterator o_it = construct_default.begin(); o_it != construct_default.end(); o_it++)
		std::cout << *o_it << std::endl;
	std::cout << "Size = " << construct_default.size() << std::endl;
	std::cout << "Capacity = " << construct_default.capacity() << std::endl;
	// std::cout << "begin = " << construct_default.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "MYTEST : <Default constuctor> :" << std::endl;

	for (ft::vector<int>::iterator it = my_construct_default.begin(); it != my_construct_default.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << my_construct_default.size() << std::endl;
	std::cout << "Capacity = " << my_construct_default.capacity() << std::endl;
	// std::cout << "begin = " << my_construct_default.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "REAL : <Fill constuctor> :" << std::endl;
	

	for (std::vector<int>::iterator o_it = construct_fill.begin(); o_it != construct_fill.end(); o_it++)
		std::cout << *o_it << std::endl;
	std::cout << "Size = " << construct_fill.size() << std::endl;
	std::cout << "Capacity = " << construct_fill.capacity() << std::endl;
	std::cout << "begin = " << construct_fill.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "MYTEST : <Fill constuctor> :" << std::endl;

	for (ft::vector<int>::iterator it = my_construct_fill.begin(); it != my_construct_fill.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << my_construct_fill.size() << std::endl;
	std::cout << "Capacity = " << my_construct_fill.capacity() << std::endl;
	std::cout << "begin = " << my_construct_fill.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "REAL : <Range constuctor> :" << std::endl;
	

	for (std::vector<int>::iterator o_it = construct_range.begin(); o_it != construct_range.end(); o_it++)
		std::cout << *o_it << std::endl;
	std::cout << "Size = " << construct_range.size() << std::endl;
	std::cout << "Capacity = " << construct_range.capacity() << std::endl;
	std::cout << "begin = " << construct_range.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "MYTEST : <Range constuctor> :" << std::endl;

	for (ft::vector<int>::iterator it = my_construct_range.begin(); it != my_construct_range.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << my_construct_range.size() << std::endl;
	std::cout << "Capacity = " << my_construct_range.capacity() << std::endl;
	std::cout << "begin = " << my_construct_range.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "REAL : <Copy constuctor> :" << std::endl;
	

	for (std::vector<int>::iterator o_it = construct_copy.begin(); o_it != construct_copy.end(); o_it++)
		std::cout << *o_it << std::endl;
	std::cout << "Size = " << construct_copy.size() << std::endl;
	std::cout << "Capacity = " << construct_copy.capacity() << std::endl;
	std::cout << "begin = " << construct_copy.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "MYTEST : <Copy constuctor> :" << std::endl;

	for (ft::vector<int>::iterator it = my_construct_copy.begin(); it != my_construct_copy.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "Size = " << my_construct_copy.size() << std::endl;
	std::cout << "Capacity = " << my_construct_copy.capacity() << std::endl;
	std::cout << "begin = " << my_construct_copy.begin()[0] << std::endl;

	std::cout << "-------------" << std::endl;
}