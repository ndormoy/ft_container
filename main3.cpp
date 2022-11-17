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
	const TESTED_NAMESPACE::map<int, int> m;

	m.insert(TESTED_NAMESPACE::make_pair(1, 1));
	m.insert(TESTED_NAMESPACE::make_pair(2, 2));

	TESTED_NAMESPACE::map<int, int>::const_iterator it = m.begin();

	std::cout << "it->first: " << it->first << std::endl;
}