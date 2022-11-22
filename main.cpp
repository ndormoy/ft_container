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
  TESTED_NAMESPACE::map<char,int>::iterator itlow,itup;

  mymap['a']=20;
  mymap['b']=40;
  mymap['c']=60;
  mymap['d']=80;
  mymap['e']=100;

  itlow=mymap.lower_bound ('b');  // itlow points to b
  itup=mymap.upper_bound ('d');   // itup points to e (not d!)

  std::cout << "low : " << itlow->first << '\n';
  std::cout << "up : " << itup->first << '\n';

  mymap.erase(itlow,itup);        // erases [itlow,itup)

  // print content:
  for (TESTED_NAMESPACE::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}

