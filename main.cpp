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
	// ft::vector<int> v;
	// v.push_back(1);
    // v.push_back(2);
	// v.push_back(3);
    // v.push_back(4);
	// // ft::map<int, int> m;
	// ft::vector<int>::iterator it = v.begin();
	// ft::map(it, it + 2);

	ft::map<int, int> m;


	m.insert(ft::pair<int, int>(3, 3));
	// m.insert(ft::pair<int, int>(1, 1));

	// m.insert(ft::pair<int, int>(2, 2));
	// m.insert(ft::pair<int, int>(4, 4));
	// m.insert(ft::pair<int, int>(7, 7));
	// m.insert(ft::pair<int, int>(5, 5));
	// m.insert(ft::pair<int, int>(6, 6));


	// ft::map<int, int>::iterator it = m.end();
	// it--;
	// // it--;
	// std::cout << "BEGIN = " << m.begin()->first << std::endl;
	// std::cout << "END = " << it->first << std::endl;

	// for(ft::map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	// {
	// 	// std::cout << it->first << std::endl;
	// 	std::cout << it->first << std::endl;
	// }


	std::pair<int, bool> p;

	p.first = 1;
    p.second = true;

	std::cout << p.first << std::endl;
}
