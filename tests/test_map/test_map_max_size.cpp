#include "includes/vector.hpp"
#include "includes/enable_if.hpp"
#include "includes/equal.hpp"
#include "includes/is_integral.hpp"
#include "includes/iterator_traits.hpp"
#include "includes/iterator_utils.hpp"
#include "includes/pair.hpp"
#include "includes/reverse_iterator.hpp"
#include "includes/reverse_iterator.hpp"
#include "includes/vector_utils.hpp"
#include "includes/stack.hpp"
#include "includes/map.hpp"
#include "includes/red_black_tree.hpp"
#include "includes/red_black_tree_iterator.hpp"
#include "includes/nullptr.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <memory>
#include <cassert>
#include <limits>
#include <algorithm>
#include <map>




int main()
{

	ft::map<int, bool>	map;


	map.insert(ft::pair<int, bool>(1, true));
	map.insert(ft::pair<int, bool>(2, true));
	map.insert(ft::pair<int, bool>(3, true));
	map.insert(ft::pair<int, bool>(4, true));

	for (ft::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << std::endl;
	}

	std::cout << "size = " << map.size() << std::endl;
	std::cout << "Max size = " << map.max_size() << std::endl;


	/**************************************************************/

	// std::cout << "--------REAL--------------" << std::endl;

	// std::map<int, bool> map;

	// map.insert(std::pair<int, bool>(1, true));
	// map.insert(std::pair<int, bool>(2, true));
	// map.insert(std::pair<int, bool>(3, true));
	// map.insert(std::pair<int, bool>(4, true));



	// for (std::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
	// {
	// 	std::cout << it->first << std::endl;
	// }

	// std::cout << "size = " << map.size() << std::endl;
	// std::cout << "Max size = " << map.max_size() << std::endl;

// 	std::cout << "it: " << it->first << std::endl;
// 	std::cout << "it_end: " << it_end->first << std::endl;
}