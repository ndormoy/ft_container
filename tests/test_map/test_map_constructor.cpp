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
	std::cout << "Default constructor" << std::endl;

	TESTED_NAMESPACE::map<int, int>	map; // Default constructor

	map.insert(TESTED_NAMESPACE::pair<int, int>(20, 20));
	map.insert(TESTED_NAMESPACE::pair<int, int>(30, 30));
	map.insert(TESTED_NAMESPACE::pair<int, int>(40, 40));
	map.insert(TESTED_NAMESPACE::pair<int, int>(50, 50));
	map.insert(TESTED_NAMESPACE::pair<int, int>(60, 60));

	for (TESTED_NAMESPACE::map<int, int>::iterator it = map.begin(); it != map.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;

	std::cout << "Range constructor" << std::endl;

	TESTED_NAMESPACE::map<int, int>	map_range(map.begin(), map.end()); // Range constructor

	for (TESTED_NAMESPACE::map<int, int>::iterator it = map_range.begin(); it != map_range.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;

	std::cout << "Copy constructor" << std::endl;

	TESTED_NAMESPACE::map<int, int>	map_copy(map_range); // Copy constructor

	for (TESTED_NAMESPACE::map<int, int>::iterator it = map_copy.begin(); it != map_copy.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;

	return 0;
}

