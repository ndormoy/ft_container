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
#include "includes/set.hpp"
// #include "includes/red_black_tree.hpp"
// #include "includes/red_black_tree_iterator.hpp"
#include "includes/nullptr.hpp"
#include "includes/color.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <memory>
#include <cassert>
#include <limits>
#include <algorithm>
#include <map>
#include <stack>
#include <set>

// template <typename T>
// void print_set(TESTED_NAMESPACE::set<T> myset)
// {
// 	if (myset.empty())
// 	{
// 		std::cout << "set is empty" << std::endl;
// 		return ;
// 	}
// 	for (typename TESTED_NAMESPACE::set<T>::iterator it = myset.begin(); it != myset.end(); ++it)
// 		std::cout << "it->first = " << it->first << std::endl;
// 	std::cout << "size = " << myset.size() << std::endl;
// }



int main()
{
	TESTED_NAMESPACE::set<std::string> setOfNumbers;
    // Lets insert four elements
    setOfNumbers.insert("first");
    setOfNumbers.insert("second");
    setOfNumbers.insert("third");
    setOfNumbers.insert("first");
    // // Only 3 elements will be inserted
    std::cout<<"Set Size = "<<setOfNumbers.size()<<std::endl;
    // // Iterate through all the elements in a set and display the value.
    for (TESTED_NAMESPACE::set<std::string>::iterator it=setOfNumbers.begin(); it!=setOfNumbers.end(); ++it)
        std::cout << "value = " << *it << std::endl;
    std::cout<<"\n";
    return 0;

	
}