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
	TESTED_NAMESPACE::map<char, int>	foo, bar;

	foo.insert(TESTED_NAMESPACE::pair<char, int>('x', 100));
	foo.insert(TESTED_NAMESPACE::pair<char, int>('y', 200));

	bar.insert(TESTED_NAMESPACE::pair<char, int>('a', 11));
	bar.insert(TESTED_NAMESPACE::pair<char, int>('b', 22));
	bar.insert(TESTED_NAMESPACE::pair<char, int>('c', 33));

	foo.swap(bar);

	std::cout << "foo contains:\n";
	for (TESTED_NAMESPACE::map<char, int>::iterator it = foo.begin(); it != foo.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	std::cout << "bar contains:\n";
	for (TESTED_NAMESPACE::map<char, int>::iterator it = bar.begin(); it != bar.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	return 0;
}

