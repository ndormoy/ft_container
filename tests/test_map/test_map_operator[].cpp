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
	ft::map<int, std::string>	map;

	map.insert(ft::pair<int, std::string>(1, "hello"));
	map.insert(ft::pair<int, std::string>(2, "salut"));
	map.insert(ft::pair<int, std::string>(3, "Pouet"));
	map.insert(ft::pair<int, std::string>(4, "mdr"));

	std::cout << "map[2] = " << map[2] << std::endl;


	/**************************************************************/

	// std::cout << "--------REAL--------------" << std::endl;

	// std::map<int, std::string> map;

	// map.insert(std::pair<int, std::string>(1, "hello"));
	// map.insert(std::pair<int, std::string>(2, "salut"));
	// map.insert(std::pair<int, std::string>(3, "Pouet"));
	// map.insert(std::pair<int, std::string>(4, "mdr"));

	// std::cout << "map[2] = " << map[2] << std::endl;
}

