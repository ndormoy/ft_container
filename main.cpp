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
	ft::map<int, bool>	map;

	// map.insert(ft::pair<int, bool>(1, true));
	// map.print_map();
	// std::cout << "END 1st insert ----------------" << std::endl;
	// map.insert(ft::pair<int, bool>(2, true));
	// map.print_map();
	// std::cout << "END 2st insert----------------" << std::endl;
	// map.insert(ft::pair<int, bool>(3, true));
	// map.print_map();
	// std::cout << "END 3st insert----------------" << std::endl;
	// map.insert(ft::pair<int, bool>(6, true));

	map.insert(ft::pair<int, bool>(4, true));
	map.print_map();
	std::cout << "END 1st insert ----------------" << std::endl;
	map.insert(ft::pair<int, bool>(1, true));
	map.print_map();
	std::cout << "END 2st insert----------------" << std::endl;
	map.insert(ft::pair<int, bool>(3, true));
	map.print_map();
	std::cout << "END 3st insert----------------" << std::endl;
	map.insert(ft::pair<int, bool>(6, true));

	map.print_map();
	std::cout << "END 4st insert----------------" << std::endl;

	std::cout <<"--------BEGIN-----" << std::endl;
	ft::map<int, bool>::iterator it_beg = map.begin();
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;
	it_beg++;
	std::cout << it_beg->first << std::endl;


	std::cout << "-------END-------" << std::endl;
	ft::map<int,bool>::iterator it = map.end();
	std::cout << it->first << std::endl;
	it--;
	std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;


	// std::cout << "-------RBEGIN-------" << std::endl;

	// ft::map<int,bool>::reverse_iterator rit = map.rbegin();
	// std::cout << "rit->first: " << rit->first << std::endl;
	// std::cout << "rit++" << std::endl;
	// rit++;
	// std::cout << "rit->first: " << rit->first << std::endl;

	// std::cout << "-------REND--------" << std::endl;

	// ft::map<int, bool>::reverse_iterator rit_end = map.rend();
	// std::cout << "rit_end->first: " << rit_end->first << std::endl;
	// std::cout << "rit_end--" << std::endl;
	// rit_end--;
	// std::cout << "rit_end->first: " << rit_end->first << std::endl;

	
	// for (; rit != map.rbegin(); rit--)
	// {
	// 	std::cout << rit->first << std::endl;
	// }
	// rit++;
	// std::cout << rit->first << std::endl;

	// // ft::map<int, bool>::iterator	it = map.find(3);
	// // it--;
	// // std::cout << it->first << std::endl;

	// // std::cout << "it->first: " << it->first << std::endl;
	// ft::map<int,bool>::reverse_iterator rit = map.rend();
	// std::cout << "rit->first: " << rit->first << std::endl;
 	//  for (rit = map.rbegin(); rit != map.rend(); ++rit)
    // std::cout << rit->first << " => " << rit->second << '\n';

	/**************************************************************/

	// std::map<int, bool>	map;

	// map.insert(std::pair<int, bool>(1, true));
	// map.insert(std::pair<int, bool>(2, true));
	// map.insert(std::pair<int, bool>(3, true));
	// map.insert(std::pair<int, bool>(6, true));

	// std::cout << "-------END-------" << std::endl;
	// std::map<int,bool>::iterator it = map.end();
	// std::cout << "it->first: " << it->first << std::endl;
	// std::cout << "it--" << std::endl;
	// it--;
	// std::cout << "it->first: " << it->first << std::endl;

	// std::cout << "-------RBEGIN-------" << std::endl;
	// std::map<int,bool>::reverse_iterator rit = map.rbegin();
	// std::cout << "rit->first: " << rit->first << std::endl;
	// std::cout << "rit++" << std::endl;
	// rit++;
	// std::cout << "rit->first: " << rit->first << std::endl;

	// std::cout << "-------REND--------" << std::endl;

	// std::map<int, bool>::reverse_iterator rit_end = map.rend();
	// std::cout << "rit_end->first: " << rit_end->first << std::endl;
	// std::cout << "rit_end--" << std::endl;
	// rit_end--;
	// std::cout << "rit_end->first: " << rit_end->first << std::endl;

	// std::map<int,bool>::reverse_iterator rit;
 	// // //  for (rit = map.rbegin(); rit != map.rend(); ++rit)
    // // // 	std::cout << rit->first << " => " << rit->second << '\n';


	// for (ft::map<int, bool>::iterator it = map_cpy.begin(); it != map_cpy.end(); ++it)
	// {
	// 	std::cout << it->first << std::endl;
	// }
	// ft::map<int, bool>::iterator it = map.begin();
	// it++;
	

	// std::cout << it->first << std::endl;

	// std::cout << "--------REAL--------------" << std::endl;

	// std::map<int, bool> map;
	// std::map<int, bool> map_cpy;

	// std::cout << "-------REAL--------------" << std::endl;

	// map.insert(std::pair<int, bool>(1, true));
	// map.insert(std::pair<int, bool>(2, true));
	// map.insert(std::pair<int, bool>(3, true));
	// map.insert(std::pair<int, bool>(6, true));

	// std::cout <<"--------BEGIN-----" << std::endl;
	// std::map<int, bool>::iterator it_beg = map.begin();
	// std::cout << it_beg->first << std::endl;
	// it_beg++;
	// std::cout << it_beg->first << std::endl;
	// it_beg++;
	// std::cout << it_beg->first << std::endl;
	// it_beg++;
	// std::cout << it_beg->first << std::endl;
	// it_beg++;
	// // std::cout << it_beg->first << std::endl;


	// std::cout << "-------END-------" << std::endl;
	// std::map<int,bool>::iterator it = map.end();
	// // std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;
	// it--;
	// std::cout << it->first << std::endl;

	// map_cpy = map;

	// for (std::map<int, bool>::iterator it = map_cpy.begin(); it != map_cpy.end(); ++it)
	// {
	// 	std::cout << it->first << std::endl;
	// }

}

