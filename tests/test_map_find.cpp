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

	ft::map<int, bool> map;

	map.insert(ft::pair<int, bool>(1, true));
	map.insert(ft::pair<int, bool>(2, true));
	map.insert(ft::pair<int, bool>(3, true));
	map.insert(ft::pair<int, bool>(4, true));

	ft::map<int, bool>::iterator it = map.find(3);
	if (it != map.end())
    {
		std::cout << "found : " << it->first << std::endl;
	}
	else
	{
		std::cout << "not found" << std::endl;
	}
}