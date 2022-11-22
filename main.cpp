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

# include <iostream>
# include <string>
# include <iostream>
# include <sstream>

namespace ft
{
	// static std::ostream& 									cout = std::cout;
	typedef std::string										string;


# ifndef TO_STRING
#  define TO_STRING
	std::string	to_string(size_t n)
	{
		std::stringstream tmp;

		tmp << n;

		return tmp.str();
	}
# endif
}

template <class Key, class T>
void	print(TESTED_NAMESPACE::map<Key, T>& lst)
{
	for (typename TESTED_NAMESPACE::map<Key, T>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << it->first << " => " << it->second << '\n';
}


int main ()
{
  TESTED_NAMESPACE::map<char,int> mymap;

  mymap['x'] = 100;
  mymap['y'] = 200;
  mymap['z'] = 300;

  // show content:
  TESTED_NAMESPACE::map<char,int>::reverse_iterator rit;
  rit=mymap.rend();
  for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
  {
	std::cout << "hey" << std::endl;
    std::cout << rit->first << " => " << rit->second << '\n';
  }


// 	for (TESTED_NAMESPACE::map<char,int>::const_reverse_iterator it=mymap.rbegin(); it!=mymap.rend(); it++)
//     std::cout << it->first << " => " << it->second << '\n';

// 	TESTED_NAMESPACE::map<char, int>::const_reverse_iterator it = mymap.rbegin();
// 	TESTED_NAMESPACE::map<char, int>::const_reverse_iterator ti = mymap.rend();

// 	it++;
// 	++it;
// 	it--;
// 	--it;

// 	ti--;
// 	--ti;
// 	++ti;
// 	ti++;

// 	ti = it;

// 	TESTED_NAMESPACE::map<char, int>::reverse_iterator end = mymap.rend();
// 	while(it != end)
// 	{
//     	std::cout << it->first << " => " << it->second << '\n';
// 		it++;
// 	}


  return 0;
}

