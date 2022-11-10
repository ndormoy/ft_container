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

	// ft::map<int, bool>	map;
	ft::map<int, std::string>	map;


	// map.insert(ft::pair<int, bool>(1, true));
	// map.insert(ft::pair<int, bool>(2, true));
	// map.insert(ft::pair<int, bool>(3, true));
	// map.insert(ft::pair<int, bool>(4, true));

	map.insert(ft::pair<int, std::string>(1, "hello"));
	map.insert(ft::pair<int, std::string>(2, "salut"));
	map.insert(ft::pair<int, std::string>(3, "Pouet"));
	map.insert(ft::pair<int, std::string>(4, "mdr"));

	std::cout << "map[2] = " << map[2] << std::endl;


// 	ft::map<int, bool>::iterator	it = map.begin();
// 	ft::map<int, bool>::iterator    it_end = map.end();

// 	// for (ft::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
// 	// {
// 	// 	std::cout << it->first << std::endl;
// 	// }

// 	do {
//     std::cout << it->first << " => " << it->second << '\n';
//   } while ( map.value_comp()(*it++, it_end) );



	// std::cout << it->first << std::endl;


	/**************************************************************/

	// std::cout << "--------REAL--------------" << std::endl;

	// std::map<int, std::string> map;

	// map.insert(std::pair<int, std::string>(1, "hello"));
	// map.insert(std::pair<int, std::string>(2, "salut"));
	// map.insert(std::pair<int, std::string>(3, "Pouet"));
	// map.insert(std::pair<int, std::string>(4, "mdr"));

	// map.insert(std::pair<int, bool>(1, true));
	// map.insert(std::pair<int, bool>(2, true));
	// map.insert(std::pair<int, bool>(3, true));
	// map.insert(std::pair<int, bool>(4, true));



	// for (std::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
	// {
	// 	std::cout << it->first << std::endl;
	// }

	// std::cout << "allocator = " << map.get_allocator().max_size() << std::endl;

	// std::cout << it->first << std::endl;

	// std::map<int, bool>	map;


	// map.insert(std::pair<int, bool>(1, true));
	// map.insert(std::pair<int, bool>(2, true));
	// map.insert(std::pair<int, bool>(3, true));
	// map.insert(std::pair<int, bool>(4, true));

	// std::map<int, bool>::iterator	it = map.begin();
	// std::map<int, bool>::iterator    it_end = map.end();

	// for (ft::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
	// {
	// 	std::cout << it->first << std::endl;
	// }

}

