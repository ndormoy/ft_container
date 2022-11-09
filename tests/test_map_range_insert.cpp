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


	ft::map<int, bool>	map;
	ft::map<int, bool>	add_map;

	add_map.insert(ft::pair<int, bool>(-70, true));
	add_map.insert(ft::pair<int, bool>(0, true));
	add_map.insert(ft::pair<int, bool>(20, true));
	add_map.insert(ft::pair<int, bool>(80, true));

	ft::map<int, bool>::iterator add_it_beg = add_map.begin();
	ft::map<int, bool>::iterator add_it_end = add_map.end();

	map.insert(ft::pair<int, bool>(1, true));
	map.insert(ft::pair<int, bool>(2, true));
	map.insert(ft::pair<int, bool>(3, true));
	map.insert(ft::pair<int, bool>(4, true));

	map.insert(add_it_beg, add_it_end);

	for (ft::map<int, bool>::iterator it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << std::endl;
	}

}