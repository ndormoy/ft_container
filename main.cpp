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
	ft::RedBlackTree<ft::pair<int, bool>, std::less<int>, std::allocator<ft::pair<int, bool> > > tree;

	tree.insert(ft::pair<int, bool>(1, true));
	// std::cout << "insert return = " << tree.insert(ft::pair<int, bool>(2, true))->data.first << std::endl;

	// ft::RedBlackTree<ft::pair<int, bool>, std::less<int>, std::allocator<ft::pair<int, bool> > >::iterator it = tree.begin();

	tree.insert(ft::pair<int, bool>(2, true));

	tree.printTree();
}
