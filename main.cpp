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

	std::map<int, int> m;


	m.insert(std::pair<int, int>(3, 3));
	m.insert(std::pair<int, int>(1, 1));
	m.insert(std::pair<int, int>(2, 2));
	m.insert(std::pair<int, int>(4, 4));
	m.insert(std::pair<int, int>(7, 7));
	m.insert(std::pair<int, int>(5, 5));
	m.insert(std::pair<int, int>(6, 6));


	std::map<int, int>::iterator it = m.end();
	it--;
	// it--;
	std::cout << "BEGIN = " << m.begin()->first << std::endl;
	std::cout << "END = " << it->first << std::endl;
}


// int main()
// {
// 		ft::RedBlackTree<int, int, std::allocator<std::pair<int, int> > > bst;
// 		(void)bst;
// 		bst.insert(10);
// 		bst.insert(6);
// 		bst.insert(14);
// 		bst.insert(4);
// 		// // bst.insert(8);
// 		bst.insert(12);
// 		bst.insert(16);
// 		bst.insert(3);
// 		bst.insert(5);
// 		bst.insert(7);
// 		bst.insert(9);
// 		bst.insert(11);
// 		bst.insert(13);
// 		bst.insert(15);
// 		bst.insert(17);
// 		bst.insert(18);
// 		bst.insert(19);
// 		bst.insert(20);
// 		bst.insert(8);
// 		bst.insert(55);
// 		bst.insert(40);
// 		bst.insert(65);
// 		bst.insert(60);
// 		bst.insert(75);
// 		bst.insert(57);

// 		// bst.printTree();
// 		// bst.deleteNode(8);
// 		// bst.deleteNode(7);
// 		// bst.deleteNode(16);
// 		bst.printTree();

// 		bst.deleteNode(8);

// 		bst.printTree();

// }