// #include "includes/vector.hpp"
// #include "includes/enable_if.hpp"
// #include "includes/equal.hpp"
// #include "includes/is_integral.hpp"
// #include "includes/iterator_traits.hpp"
// #include "includes/iterator_utils.hpp"
// #include "includes/pair.hpp"
// #include "includes/reverse_iterator.hpp"
// #include "includes/reverse_iterator.hpp"
// #include "includes/vector_utils.hpp"
// #include "includes/stack.hpp"
// #include "includes/map.hpp"
// #include "includes/red_black_tree.hpp"
// #include "includes/red_black_tree_iterator.hpp"
// #include "includes/nullptr.hpp"
// #include "includes/color.hpp"
// #include "map.hpp"
#include "includes.hpp"

// #include <iostream>
// #include <string>
// #include <vector>
// #include <list>
// #include <memory>
// #include <cassert>
// #include <limits>
// #include <algorithm>
// #include <map>
// #include <iterator>

// # include <iostream>
// # include <string>
// # include <iostream>
// # include <sstream>

// #include <map>
// #include <cstdio>
// #include <iomanip>


namespace ft
{
	// static std::ostream& 									std::cout = std::std::cout;
	typedef std::string										string;


# ifndef TO_STRING
#  define TO_STRING
	string	to_string(size_t n)
	{
		std::stringstream tmp;

		tmp << n;

		return tmp.str();
	}
# endif
}

using namespace TESTED_NAMESPACE;

template <class Key, class T>
void	print(map<Key, T>& lst)
{
	for (typename map<Key, T>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
}

int main()
{
	pair<int, string>			my_pair(8, "salut");
	map<int, string>			test;
	map<int, string>::iterator	it;

	test.insert(my_pair);
	test.insert(pair<int, string>(-4, "bar"));
	test.insert(pair<int, string>(2, "machin"));
	test.insert(pair<int, string>(3, "foo"));
	test.insert(pair<int, string>(746, "Marcel"));
	test.insert(pair<int, string>(1, "truc"));
	it = test.begin();
	std::cout << '\n';

	while (it != test.end())
	{
		// std::cout << "start of while\n";
		std::cout << it->first << ", " << it->second << '\n';
		it++;
// 		std::cout << "iterator incremented\n";

// #ifndef STD
// 		std::cout << it.getPointer() << '\n';
// 		std::cout << test.end().getPointer() << '\n';
// #endif

	}
	std::cout << "End of display loop\n";
}