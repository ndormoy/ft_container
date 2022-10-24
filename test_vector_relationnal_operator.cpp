#include "vector.hpp"
#include <vector>

int main()
{
	std::vector<int>	test;

	test.push_back(1);
    test.push_back(2);
	test.push_back(3);
    test.push_back(4);

	std::vector<int>	comp_test;

	comp_test.push_back(10);
	comp_test.push_back(20);
	comp_test.push_back(30);
	comp_test.push_back(40);

	/*------------------------------------*/

	ft::vector<int>	my_test;

	my_test.push_back(1);
	my_test.push_back(2);
	my_test.push_back(3);
	my_test.push_back(4);

	ft::vector<int>	my_other_test;
	
	my_other_test.push_back(10);
	my_other_test.push_back(20);
	my_other_test.push_back(30);
	my_other_test.push_back(40);

	/*------------------------------------*/

	std::cout << "REAL RELATIONNAL OPERATOR TEST" << std::endl;
	std::cout << "test == comp_test: " << std::endl;
	std::cout << "REAL TEST" << std::endl;
	if (test == comp_test)
		std::cout << "EQUAL : ==" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test == my_other_test)
		std::cout << "EQUAL : ==" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;

	std::cout << "test != comp_test: " << std::endl;
	std::cout << "REAL TEST" << std::endl;
	if (test != comp_test)
		std::cout << "DIFFRENT : !=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test!= my_other_test)
		std::cout << "DIFFRENT : !=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test < comp_test: " << std::endl;
	std::cout << "REAL TEST" << std::endl;
	if (test < comp_test)
		std::cout << "LOWER : <" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test < my_other_test)
		std::cout << "LOWER : <" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test > comp_test: " << std::endl;
	std::cout << "REAL TEST" << std::endl;
	if (test > comp_test)
	std::cout << "HIGHER : >" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test > my_other_test)
		std::cout << "HIGHER : >" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test <= comp_test: " << std::endl;
	std::cout << "REAL TEST" << std::endl;
	if (test <= comp_test)
		std::cout << "LOWER <=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test <= my_other_test)
		std::cout << "LOWER <=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test >= comp_test: " << std::endl;
	std::cout << "REAL TEST" << std::endl;
	if (test >= comp_test)
		std::cout << "HIGHER : >=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test >= my_other_test)
		std::cout << "HIGHER : >=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

}