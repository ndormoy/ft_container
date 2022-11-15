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
	TESTED_NAMESPACE::map<int, bool>	map;


	map.insert(TESTED_NAMESPACE::pair<int, bool>(2, true));
	map.insert(TESTED_NAMESPACE::pair<int, bool>(1, true));
	map.insert(TESTED_NAMESPACE::pair<int, bool>(3, true));
	map.insert(TESTED_NAMESPACE::pair<int, bool>(6, true));

	for (TESTED_NAMESPACE::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
		std::cout << it->first << std::endl;
	std::cout << "----------------" << std::endl;
	for (TESTED_NAMESPACE::map<int, bool>::iterator it = map.end(); it != map.begin(); --it)
		std::cout << it->first << std::endl;

	std::cout <<"--------BEGIN-----" << std::endl;
	TESTED_NAMESPACE::map<int, bool>::iterator it_beg = map.begin();
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;


	std::cout << "-------END-------" << std::endl;
	TESTED_NAMESPACE::map<int,bool>::iterator it = map.end();
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;


	std::cout << "-------RBEGIN-------" << std::endl;

	TESTED_NAMESPACE::map<int,bool>::reverse_iterator rit = map.rbegin();
	std::cout << "rit->first: " << rit->first << std::endl;
	std::cout << "rit++" << std::endl;
	rit++;
	std::cout << "rit->first: " << rit->first << std::endl;

	std::cout << "-------REND--------" << std::endl;

	TESTED_NAMESPACE::map<int, bool>::reverse_iterator rit_end = map.rend();
	std::cout << "rit_end->first: " << rit_end->first << std::endl;
	std::cout << "rit_end--" << std::endl;
	rit_end--;
	std::cout << "rit_end->first: " << rit_end->first << std::endl;