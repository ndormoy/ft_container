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
	// ft::RedBlackTree<ft::pair<int, int>, std::less<int>, std::allocator<ft::pair<int, bool> > > tree;

	// tree.insert(ft::pair<int, int>(1, 1));

	// ft::RedBlackTree<ft::pair<int, int>, std::less<int>, std::allocator<ft::pair<int, bool> > >::iterator it = tree.begin();

	// tree.insert(ft::pair<int, int>(2, 2));

	// tree.insert(ft::pair<int, int>(3, 3));

	// tree.insert(ft::pair<int, int>(4, 4));
	

	// tree.printTree();


	ft::map<int, bool> map;

	map.insert(ft::pair<int, bool>(1, true));
	map.insert(ft::pair<int, bool>(2, true));
	map.insert(ft::pair<int, bool>(3, true));
	map.insert(ft::pair<int, bool>(4, true));

	// ft::map<int, bool>::iterator it = map.begin();
	ft::map<int, bool>::iterator it = map.find(50);
	if (it != map.end())
    {
		std::cout << "found : " << it->first << std::endl;
	}
	else
	{
		std::cout << "not found" << std::endl;
	}
	// ft::map<int, bool>::iterator it_end = map.end();


	// it++;
	// it++;
	// it++;
	// // it++;

	// for (; it != map.end(); it++)
	// {
	// 	std::cout << it->first << std::endl;
	// }

	// std::cout << "it->begin = " << it->first << std::endl;

	// std::cout << "it->end = " << it_end->first << std::endl;

	// map.print_map();

	/**************************************************************/


// 	std::map<int, bool> map;

// 	map.insert(std::pair<int, bool>(1, true));
// 	map.insert(std::pair<int, bool>(2, true));
// 	map.insert(std::pair<int, bool>(3, true));
// 	map.insert(std::pair<int, bool>(4, true));

// 	// std::map<int, bool>::iterator it = map.begin();
// 	std::map<int, bool>::iterator it = map.find(10);
// 	std::map<int, bool>::iterator it_end = map.end();

// 	// // it++;
// 	// // it++;
// 	// // it++;
// 	// // it++;
// 	// // it++;

// 	std::cout << "it: " << it->first << std::endl;
// 	std::cout << "it_end: " << it_end->first << std::endl;
}

