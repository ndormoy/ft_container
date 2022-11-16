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
	ft::map<int,std::string> MyMap;
 	ft::map<int, std::string>::iterator it;

 	MyMap[101] = "John";
 	MyMap[102] = "Marry";
 	MyMap[103] = "Kim";
 	MyMap[104] = "Jo";
 	MyMap[105] = "Ramesh";

 	//creating a value_comp object
	ft::map<int, std::string>::iterator it_end = MyMap.end();
	it_end--;
 	ft::map<int, std::string>::value_compare MyComp = MyMap.value_comp();

 	//printing the content of the map using value_comp object
 	it = MyMap.begin();
 	std::cout<<"MyMap contains:\n ";
 	do {
 	  std::cout<<it->first<<"  "<<it->second<<"\n ";
 	} while(MyComp(*it++, *it_end));

 	return 0;




	/**************************************************************/


	// std::map<int,std::string> MyMap;
 	// std::map<int, std::string>::iterator it;

 	// MyMap[101] = "John";
 	// MyMap[102] = "Marry";
 	// MyMap[103] = "Kim";
 	// MyMap[104] = "Jo";
 	// MyMap[105] = "Ramesh";

 	// //creating a value_comp object
	// std::map<int, std::string>::iterator it_end = MyMap.end();
	// it_end--;
 	// std::map<int, std::string>::value_compare MyComp = MyMap.value_comp();

 	// //printing the content of the map using value_comp object
 	// it = MyMap.begin();
 	// std::cout<<"MyMap contains:\n ";
 	// do {
 	//   std::cout<<it->first<<"  "<<it->second<<"\n ";
 	// } while(MyComp(*it++, *it_end));

 	// return 0;

}

