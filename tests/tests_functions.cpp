#include "../includes/vector.hpp"
#include "../includes/enable_if.hpp"
#include "../includes/equal.hpp"
#include "../includes/is_integral.hpp"
#include "../includes/iterator_traits.hpp"
#include "../includes/iterator_utils.hpp"
#include "../includes/pair.hpp"
#include "../includes/reverse_iterator.hpp"
#include "../includes/reverse_iterator.hpp"
#include "../includes/vector_utils.hpp"
#include "../includes/stack.hpp"
#include "../includes/map.hpp"
#include "../includes/red_black_tree.hpp"
#include "../includes/red_black_tree_iterator.hpp"
#include "../includes/nullptr.hpp"
#include "../includes/color.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <memory>
#include <cassert>
#include <limits>
#include <algorithm>
#include <map>
#include <stack>

bool pred_function (int i, int j) {
  return (i == j);
}

bool other_pred_function (int i, int j) {
  return (i != j);
}

void	tests_functions(void)
{
		std::cout << BRED << "*******************************" << std::endl;
	std::cout << "<---------TEST FUNCTIONS--------->" << std::endl;
	std::cout << "*******************************" << CRESET << std::endl;

	std::cout << BBLU << "1) IS INTEGRAL" << CRESET << std::endl;

	std::cout << std::boolalpha;
	std::cout << "is_integral:" << std::endl;
	const bool ret = ft::is_integral<char>::value;
	if (ret != true)
		std::cout << "WRONG --> YOUR FUNCTION IS NOT WORKING !" << std::endl;
	else
		std::cout << "OK" << std::endl;
	const bool ret_2 = ft::is_integral<int>::value;
	if (ret_2 != true)
		std::cout << "WRONG --> YOUR FUNCTION IS NOT WORKING !" << std::endl;
	else
		std::cout << "OK" << std::endl;
	const bool ret_3 = ft::is_integral<float>::value;
	if (ret_3 != false)
		std::cout << "WRONG --> YOUR FUNCTION IS NOT WORKING !" << std::endl;
	else
		std::cout << "OK" << std::endl;

	std::cout << BBLU << "2) PAIR" << CRESET << std::endl;

	TESTED_NAMESPACE::pair<int, char> pair;

	pair.first = 42;
	pair.second = 'A';

	std::cout << pair.first << " ";
	std::cout << pair.second << std::endl;

	std::cout << BBLU << "3) MAKE PAIR" << CRESET << std::endl;

	TESTED_NAMESPACE::pair<int, char> pair_2 = TESTED_NAMESPACE::make_pair(42, 'A');
	
	std::cout << pair_2.first << " ";
	std::cout << pair_2.second << std::endl;

	std::cout << BBLU << "4) EQUAL" << CRESET << std::endl;

	int tab[] = {20,40,60,80,100};

	TESTED_NAMESPACE::vector<int> vector_equal (tab,tab + 5);

	// using default comparison:
	if ( TESTED_NAMESPACE::equal (vector_equal.begin(), vector_equal.end(), tab) )
	std::cout << "The contents of both sequences are equal.\n";
	else
	std::cout << "The contents of both sequences differ.\n";
	vector_equal[3]=81;

	// using predicate comparison:
	if ( TESTED_NAMESPACE::equal (vector_equal.begin(), vector_equal.end(), tab, pred_function) )
	std::cout << "The contents of both sequences are equal.\n";
	else
	std::cout << "The contents of both sequences differ.\n";

	if ( TESTED_NAMESPACE::equal (vector_equal.begin(), vector_equal.end(), tab, other_pred_function) )
	std::cout << "The contents of both sequences are equal.\n";
	else
	std::cout << "The contents of both sequences differ.\n";
}
