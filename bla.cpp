#include "./includes/vector.hpp"
#include <vector>

int i = 0;

class LeakClass
{
	public:

		LeakClass()
		{
			ptr = new int;
		}

		LeakClass(const LeakClass& other)
		: ptr(NULL)
		{
			if (i++ == 10)
				throw std::runtime_error("caca");
			if (ptr)
				delete ptr;
			ptr = new int;
		}

		LeakClass operator=(const LeakClass& rhs)
		{
			if (ptr)
				delete ptr;
			ptr = new int;
			return (*this);
		}

		~LeakClass()
		{
			delete ptr;
		}

		int *ptr;
};

int main()
{
	ft::vector<LeakClass> v;

try
{
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());
	v.push_back(LeakClass());

} catch (
	std::exception &e)
{
	std::cout << e.what() << std::endl;
}
}

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

// //using namespace TESTED_NAMESPACE;

// /*
// ** This is a minimal set of ANSI/VT100 color codes
// */
// # define _END			"\x1b[0m"
// # define _BOLD			"\x1b[1m"
// # define _UNDER			"\x1b[4m"
// # define _REV			"\x1b[7m"

// /*
// ** Colors
// */
// # define _GREY			"\x1b[30m"
// # define _RED			"\x1b[31m"
// # define _GREEN			"\x1b[32m"
// # define _YELLOW		"\x1b[33m"
// # define _BLUE			"\x1b[34m"
// # define _PURPLE		"\x1b[35m"
// # define _CYAN			"\x1b[36m"
// # define _WHITE			"\x1b[37m"

// /*
// ** Inverted, i.e. colored backgrounds
// */
// # define _IGREY			"\x1b[40m"
// # define _IRED			"\x1b[41m"
// # define _IGREEN		"\x1b[42m"
// # define _IYELLOW		"\x1b[43m"
// # define _IBLUE			"\x1b[44m"
// # define _IPURPLE		"\x1b[45m"
// # define _ICYAN			"\x1b[46m"
// # define _IWHITE		"\x1b[47m"

// int i = 0;

// class LeakClass
// {
// 	public:

// 		LeakClass()
// 		{
// 			if (i == 3)
// 				throw std::runtime_error("caca");
// 			i++;
// 		}
// };

// int main()
// {
// 	// ft::vector<int> v((std::istream_iterator<int>(ss)), std::istream_iterator<int>());

// 	// for (ft::vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	// 	std::cout << *it << std::endl;


// 	ft::vector<LeakClass> v;

// try
// {
// 	v.push_back(LeakClass());
// 	v.push_back(LeakClass());
// 	v.push_back(LeakClass());
// 	v.push_back(LeakClass());
// 	v.push_back(LeakClass());
// } catch (
// 	std::exception &e)
// {
// 	std::cout << e.what() << std::endl;
// }

// 	// std::cout << std::setw(40) << "map == map2: " << (mymap == map2) << std::endl;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::endl;

// 	// mymap.clear();
// 	// print(mymap);
// 	// print(map2);

// 	// mymap["satan"] = 666;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::setw(40) << "mymap == map2: " << (mymap == map2) << std::endl;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::endl;
// 	// std::cout << std::setw(40) << "mymap <= map2: " << (mymap <= map2) << std::endl;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::endl;
// 	// std::cout << std::setw(40) << "mymap >= map2: " << (mymap >= map2) << std::endl;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::endl;
// 	// std::cout << std::setw(40) << "mymap > map2: " << (mymap > map2) << std::endl;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::endl;
// 	// std::cout << std::setw(40) << "mymap < map2: " << (mymap > map2) << std::endl;
// 	// print(mymap);
// 	// print(map2);
// 	// std::cout << std::endl;

// 	// return 0;
// }
