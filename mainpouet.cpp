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

#define T_SIZE_TYPE typename TESTED_NAMESPACE::vector<T>::size_type

using namespace TESTED_NAMESPACE;


# define CCOUT(color, x) std::cout << color << x << CRESET << std::endl;
# define COUT(x) std::cout << x << std::endl;
# define EXCEPTION(x, y) public: class x : public std::exception { const char * what (void) const throw { return y; } }

int main()
{

		TESTED_NAMESPACE::map<int, int> map;
		map.insert(TESTED_NAMESPACE::pair<int, int>(42, 42));
		map.insert(TESTED_NAMESPACE::pair<int, int>(478, 478));
		map.insert(TESTED_NAMESPACE::pair<int, int>(389, 389));
		map.insert(TESTED_NAMESPACE::pair<int, int>(443, 443));
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map.begin(); it != map.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		TESTED_NAMESPACE::map<int, int> map2(map);
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map2.begin(); it != map2.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		TESTED_NAMESPACE::map<int, int> map3(map2.begin(), map2.end());
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map3.begin(); it != map3.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		TESTED_NAMESPACE::map<int, int> map4(map3.begin(), map3.end(), map3.key_comp());
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map4.begin(); it != map4.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		TESTED_NAMESPACE::map<int, int> map5(map4.begin(), map4.end(), map4.key_comp(), map4.get_allocator());
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map5.begin(); it != map5.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		TESTED_NAMESPACE::map<int, int> map6(map5.begin(), map5.end(), map5.key_comp(), map5.get_allocator());
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map6.begin(); it != map6.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;

		CCOUT(UMAG, "                                         CLEAR\n");

		COUT("size: " << map6.size());
		map6.clear();
		COUT("size: " << map6.size());
		COUT("empty: " << map.empty());
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map6.begin(); it != map6.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		
		CCOUT(UMAG, "                                         OPERATOR\n");

		map6 = map;
		COUT("size: " << map6.size());
		COUT("size: " << map6.size());
		COUT("empty: " << map.empty());
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map6.begin(); it != map6.end(); it++)
			std::cout << it->first << " " << it->second << std::endl;
		COUT(map6[42]);
		COUT(map6[-30]);
		COUT(map6[478]);
		map6[478] = 42;
		
		CCOUT(UMAG, "                                         ITERATORS\n");
		
		for (TESTED_NAMESPACE::map<int, int>::iterator it = map6.begin(); it != map6.end(); ++it)
			std::cout << it->first << " " << it->second << std::endl;
		for (TESTED_NAMESPACE::map<int, int>::reverse_iterator it = map6.rbegin(); it != map6.rend(); ++it)
			std::cout << it->first << " " << it->second << std::endl;
		for (TESTED_NAMESPACE::map<int, int>::const_iterator it = map6.end(); it != map6.begin(); --it)
			std::cout << it->first << " " << it->second << std::endl;
}
