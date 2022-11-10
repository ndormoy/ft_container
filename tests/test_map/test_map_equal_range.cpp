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
	ft::map<char,int> mymap;

	mymap.insert(ft::pair<char, int>('a', 10));
	mymap.insert(ft::pair<char, int>('b', 20));
	mymap.insert(ft::pair<char, int>('c', 30));

 	ft::pair<ft::map<char,int>::iterator,ft::map<char,int>::iterator> ret;
 	ret = mymap.equal_range('b');

 	std::cout << "lower bound points to: ";
 	std::cout << ret.first->first << " => " << ret.first->second << '\n';

 	std::cout << "upper bound points to: ";
 	std::cout << ret.second->first << " => " << ret.second->second << '\n';

 	return 0;

	/**************************************************************/

	// std::map<char,int> mymap;

 	// mymap['a']=10;
 	// mymap['b']=20;
 	// mymap['c']=30;

 	// std::pair<std::map<char,int>::iterator,std::map<char,int>::iterator> ret;
 	// ret = mymap.equal_range('b');

 	// std::cout << "lower bound points to: ";
 	// std::cout << ret.first->first << " => " << ret.first->second << '\n';

 	// std::cout << "upper bound points to: ";
 	// std::cout << ret.second->first << " => " << ret.second->second << '\n';

 	// return 0;

}

