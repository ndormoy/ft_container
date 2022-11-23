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

// int main()
// {
// 	ft::map<int, int> m, other_m;

// 	m.insert(ft::make_pair(2, 1));
// 	m.insert(ft::make_pair(4, 2));
// 	m.insert(ft::make_pair(6, 1));
// 	m.insert(ft::make_pair(8, 4));
// 	m.insert(ft::make_pair(9, 4));


// 	other_m.insert(m.begin(), m.end());

// 	m.const_print_map();

// 	// ft::map<int, int>::const_iterator it = m.upper_bound(-5);

// 	// std::cout << "it->first: " << it->first << std::endl;
// }

#define T_SIZE_TYPE typename TESTED_NAMESPACE::vector<T>::size_type

using namespace TESTED_NAMESPACE;


# define CCOUT(color, x) std::cout << color << x << CRESET << std::endl;
# define COUT(x) std::cout << x << std::endl;
# define EXCEPTION(x, y) public: class x : public std::exception { const char * what (void) const throw { return y; } }

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	CCOUT(YELHB, "                                         GMARY'S TESTS                                         ");
	COUT("\n\n\n")
	CCOUT(UMAG, "NO ARGS = ALL\n0 - VECTOR\n1 - SET\n2 - MAP\n3 - STACK\n4 - PAIR\n");
	std::string arg;
	if (ac == 2)
		arg = av[1];
	else
		arg = "all";

	if (arg == "0" || arg == "vector" || arg == "all")
	{

		COUT("\n\n\n")
		CCOUT(YELHB, "                                         VECTOR TESTS                                         ");
		COUT("\n\n\n")
		

		CCOUT(UMAG, "                                         CONSTRUCTORS\n");
		

		TESTED_NAMESPACE::vector<int> myvector;
		TESTED_NAMESPACE::vector<int> myvector2(5);
		TESTED_NAMESPACE::vector<int> myvector3(5, 42);
		TESTED_NAMESPACE::vector<int> myvector4(myvector3);
		TESTED_NAMESPACE::vector<int> myvector5(myvector3.begin(), myvector3.end());
		TESTED_NAMESPACE::vector<std::string> myvector6(5, "hello");

		COUT("size: " << myvector2.size() << " capacity: " << myvector2.capacity());
		COUT("size: " << myvector3.size() << " capacity: " << myvector3.capacity());
		COUT("size: " << myvector4.size() << " capacity: " << myvector4.capacity());
		COUT("size: " << myvector5.size() << " capacity: " << myvector5.capacity());

		for (TESTED_NAMESPACE::vector<int>::iterator it = myvector3.begin(); it != myvector3.end(); it++)
			std::cout << *it << std::endl;

		for (TESTED_NAMESPACE::vector<int>::iterator it = myvector4.begin(); it != myvector4.end(); it++)
			std::cout << *it << std::endl;

		for (TESTED_NAMESPACE::vector<int>::iterator it = myvector5.begin(); it != myvector5.end(); it++)
			std::cout << *it << std::endl;

		CCOUT(UMAG, "                                         ASSIGNATION\n");

		myvector = myvector3;
		for (TESTED_NAMESPACE::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
			std::cout << *it << std::endl;

		CCOUT(UMAG, "                                         PUSH BACK\n");
		
		myvector.push_back(89);
		myvector.push_back(90);
		myvector.push_back(91);

		COUT("size: " << myvector.size() << " capacity: " << myvector.capacity());
		
		myvector.push_back(92);
		myvector.push_back(93);
		myvector.push_back(-94);
		myvector.push_back(-95);
		myvector.push_back(-96);
		myvector.push_back(-97);

		COUT("size: " << myvector.size() << " capacity: " << myvector.capacity());
		COUT("size: " << myvector6.size() << " capacity: " << myvector6.capacity());

		myvector6.push_back("wesh");
		myvector6.push_back("hell nooo");
		myvector6.push_back("c mort frr");
		myvector6.push_back("wougada");
		
		COUT("size: " << myvector6.size() << " capacity: " << myvector6.capacity());
		

		CCOUT(UMAG, "                                         ITERATORS\n");

		for (TESTED_NAMESPACE::vector<int>::iterator it = myvector.end(); it != myvector.begin(); --it)
			std::cout << *it << std::endl;

		for (TESTED_NAMESPACE::vector<int>::reverse_iterator it = myvector.rbegin(); it != myvector.rend(); ++it)
			std::cout << *it << std::endl;
	}
}