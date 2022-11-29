#ifndef TESTS_MAP_HPP
#define TESTS_MAP_HPP

#include "../includes/vector.hpp"
#include "../includes/enable_if.hpp"
#include "../includes/equal.hpp"
#include "../includes/is_integral.hpp"
#include "../includes/iterator_traits.hpp"
#include "../includes/iterator_utils.hpp"
#include "../includes/pair.hpp"
#include "../includes/reverse_iterator.hpp"
#include "../includes/reverse_iterator.hpp"
#include "../includes/vector_utils.hpp"
#include "../includes/stack.hpp"
#include "../includes/map.hpp"
#include "../includes/red_black_tree.hpp"
#include "../includes/red_black_tree_iterator.hpp"
#include "../includes/nullptr.hpp"
#include "../includes/color.hpp"

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

template <typename T, typename U>
void print_map(TESTED_NAMESPACE::map<T, U> mymap)
{
	if (mymap.empty())
	{
		std::cout << "Map is empty" << std::endl;
		return ;
	}
	for (typename TESTED_NAMESPACE::map<T, U>::iterator it = mymap.begin(); it != mymap.end(); ++it)
		std::cout << "it->first = " << it->first << " | it->second = " << it->second << std::endl;
	std::cout << "size = " << mymap.size() << std::endl;
}

void	tests_map()
{
	std::cout << BRED << "*******************************" << std::endl;
	std::cout << "<---------TEST MAP--------->" << std::endl;
	std::cout << "*******************************" << CRESET << std::endl;


	/***********************************************************************************************/

	std::cout << BBLU << "1) CONSTRUCTORS" << CRESET << std::endl;

	std::cout << BGRN << "a) empty constructor" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, int> map_empty;

	print_map(map_empty);
	std::cout << "map_empty.size() = " << map_empty.size() << std::endl;

	std::cout << BGRN << "b) range constructor" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, int> map_to_copy;

	map_to_copy.insert(TESTED_NAMESPACE::pair<int, int>(20, 20));
	map_to_copy.insert(TESTED_NAMESPACE::pair<int, int>(10, 10));
	map_to_copy.insert(TESTED_NAMESPACE::pair<int, int>(-30, -30));
	map_to_copy.insert(TESTED_NAMESPACE::pair<int, int>(40, 40));
	map_to_copy.insert(TESTED_NAMESPACE::pair<int, int>(50, 50));

	TESTED_NAMESPACE::map<int, int>	map_range(map_to_copy.begin(), map_to_copy.end()); // Range constructor

	print_map(map_range);

	TESTED_NAMESPACE::map<int, int>::iterator it_beg = map_to_copy.begin();
	it_beg++;
	it_beg++;
	TESTED_NAMESPACE::map<int, int>::iterator it_end = map_to_copy.end();
	it_end--;
	TESTED_NAMESPACE::map<int, int> map_range_2(it_beg, it_end); // Copy constructor
	print_map(map_range_2);

	TESTED_NAMESPACE::map<int, int>	map_range_3(map_to_copy.begin(), map_to_copy.begin()); // Range constructor	
	print_map(map_range_3);

	std::cout << BGRN << "c) copy constructor" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, int> map_copy(map_range); // Copy constructor
	TESTED_NAMESPACE::map<int, int> map_copy_2(map_range_2); // Copy constructor
	TESTED_NAMESPACE::map<int, int> map_copy_3(map_range_3); // Copy constructor
	TESTED_NAMESPACE::map<int, int> map_copy_4(map_empty); // Copy constructor
	print_map(map_copy);
	std::cout << "-------" << std::endl;
	print_map(map_copy_2);
	std::cout << "-------" << std::endl;
	print_map(map_copy_3);
	std::cout << "-------" << std::endl;
	print_map(map_copy_4);

	std::cout << BBLU << "2) CLEAR" << CRESET << std::endl;

	map_copy.clear();
	std::cout << "size = " << map_copy.size() << std::endl;
	map_copy_2.clear();
	std::cout << "size = " << map_copy_2.size() << std::endl;

	std::cout << BBLU << "3) COUNT" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, int> map_count;

	std::cout << "map_count.count(20) = " << map_count.count(20) << std::endl;

	map_count.insert(TESTED_NAMESPACE::pair<int, int>(20, 20));

	std::cout << "map_count.count(20) = " << map_count.count(20) << std::endl;

	map_count.insert(TESTED_NAMESPACE::pair<int, int>(20, 20));

	std::cout << "map_count.count(20) = " << map_count.count(20) << std::endl;

	std::cout << BBLU << "4) EMPTY" << CRESET << std::endl;

	std::cout << "map_count.empty() = " << map_count.empty() << std::endl;
	map_count.clear();
	std::cout << "map_count.empty() = " << map_count.empty() << std::endl;

	std::cout << BBLU << "5) LOWER BOUND && UPPER BOUND" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, char>	map_bound;

	map_bound.insert(TESTED_NAMESPACE::pair<int, char>(1, 'a'));
	map_bound.insert(TESTED_NAMESPACE::pair<int, char>(2, 'b'));
	map_bound.insert(TESTED_NAMESPACE::pair<int, char>(3, 'c'));
	map_bound.insert(TESTED_NAMESPACE::pair<int, char>(4, 'd'));

	print_map(map_bound);

	for (int i = 0; i < 6; i++)
	{
		TESTED_NAMESPACE::map<int, char>::iterator it = map_bound.lower_bound(i);
		TESTED_NAMESPACE::map<int, char>::iterator it2 = map_bound.upper_bound(i);
		if (it == map_bound.end())
			std::cout << "lower_bound(" << i << ") = " << "end" << std::endl;
		if (it2 == map_bound.end())
			std::cout << "upper_bound(" << i << ") = " << "end" << std::endl;
		else
		{
			std::cout << "lower_bound[" << i << "] = " << (map_bound.lower_bound(i))->first << " | " << (map_bound.lower_bound(i))->second << std::endl;
			std::cout << "-------" << std::endl;
			std::cout << "upper_bound[" << i << "] = " << (map_bound.upper_bound(i))->first << " | " << (map_bound.upper_bound(i))->second << std::endl;
			std::cout << "-------" << std::endl;
		}
	}
	
	std::cout << BBLU << "6) EQUAL RANGE" << CRESET << std::endl;

	TESTED_NAMESPACE::map<char,int> map_equal_range;

	map_equal_range.insert(TESTED_NAMESPACE::pair<char, int>('a', 10));
	map_equal_range.insert(TESTED_NAMESPACE::pair<char, int>('b', 20));
	map_equal_range.insert(TESTED_NAMESPACE::pair<char, int>('c', 30));

 	TESTED_NAMESPACE::pair<TESTED_NAMESPACE::map<char,int>::iterator,TESTED_NAMESPACE::map<char,int>::iterator> ret;
 	ret = map_equal_range.equal_range('b');

 	std::cout << "lower bound points to: ";
 	std::cout << ret.first->first << " => " << ret.first->second << '\n';

 	std::cout << "upper bound points to: ";
 	std::cout << ret.second->first << " => " << ret.second->second << '\n';

	std::cout << BBLU << "7) ERASE" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, bool>	map_erase;

	for (int i = 0; i < 5; i++)
		map_erase.insert(TESTED_NAMESPACE::pair<int, bool>(i, true));

	std::cout << BGRN << "a) single element erase" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, bool>::iterator where = map_erase.find(2);
	map_erase.erase(where);

	std::cout << "-------" << std::endl;
	print_map(map_erase);
	std::cout << "-------" << std::endl;
	
	std::cout << BGRN << "b) erase key" << CRESET << std::endl;

	map_erase.insert(TESTED_NAMESPACE::pair<int, bool>(2, true));

	map_erase.erase(3);
	map_erase.erase(10);

	print_map(map_erase);
	std::cout << "-------" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << BGRN << "c) erase range" << CRESET << std::endl;

	map_erase.insert(TESTED_NAMESPACE::pair<int, bool>(3, true));

	TESTED_NAMESPACE::map<int, bool>::iterator first = map_erase.find(2);
	TESTED_NAMESPACE::map<int, bool>::iterator last = map_erase.find(4);

	print_map(map_erase);
	std::cout << "-------" << std::endl;

	std::cout << "----------------" << std::endl;

	map_erase.erase(first, last);

	print_map(map_erase);
	std::cout << "-------" << std::endl;

	map_erase.clear();

	std::cout << BBLU << "8) FIND" << CRESET << std::endl;

	for (int i = 0; i < 5; i++)
		map_erase.insert(TESTED_NAMESPACE::pair<int, bool>(i, true));

	std::cout << "find(2) = " << map_erase.find(2)->first << " | " << map_erase.find(2)->second << std::endl;
	if (map_erase.find(10) == map_erase.end())
		std::cout << "find(10) = end" << std::endl;

	std::cout << BBLU << "9) SWAP" << CRESET << std::endl;

	TESTED_NAMESPACE::map<char, int>	foo, bar, pouet;

	foo.insert(TESTED_NAMESPACE::pair<char, int>('x', 100));
	foo.insert(TESTED_NAMESPACE::pair<char, int>('y', 200));

	bar.insert(TESTED_NAMESPACE::pair<char, int>('a', 11));
	bar.insert(TESTED_NAMESPACE::pair<char, int>('b', 22));
	bar.insert(TESTED_NAMESPACE::pair<char, int>('c', 33));

	foo.swap(bar);

	std::cout << "foo contains:\n";
	print_map(foo);

	std::cout << "bar contains:\n";
	print_map(bar);

	foo.swap(pouet);
	std::cout << "foo contains:\n";
	print_map(foo);
	std::cout << "pouet contains:\n";
	print_map(pouet);

	std::cout << BBLU << "10) GET ALLOCATOR" << CRESET << std::endl;

	std::cout << "allocator = " << foo.get_allocator().max_size() << std::endl;
	std::cout << "allocator = " << pouet.get_allocator().max_size() << std::endl;
	std::cout << "allocator = " << bar.get_allocator().max_size() << std::endl;
	std::cout << "allocator = " << map_erase.get_allocator().max_size() << std::endl;

	std::cout << BBLU << "11) MAX SIZE" << CRESET << std::endl;

	TESTED_NAMESPACE::map<long, long> long_map;
	TESTED_NAMESPACE::map<char, char> char_map;
	TESTED_NAMESPACE::map<unsigned char, unsigned char> uchar_map;
	TESTED_NAMESPACE::map<short, short> short_map;
	TESTED_NAMESPACE::map<unsigned short, unsigned short> ushort_map;
	TESTED_NAMESPACE::map<unsigned int, unsigned int> uint_map;
	TESTED_NAMESPACE::map<float, float> float_map;
	TESTED_NAMESPACE::map<double, double> double_map;
	TESTED_NAMESPACE::map<long long, long long > long_long_map;
	TESTED_NAMESPACE::map<unsigned long long, unsigned long long> ulong_long_map;
	TESTED_NAMESPACE::map<long double, long double> long_double_map;

	std::cout << "long_map.max_size() = " << long_map.max_size() << std::endl;
	std::cout << "char_map.max_size() = " << char_map.max_size() << std::endl;
	std::cout << "uchar_map.max_size() = " << uchar_map.max_size() << std::endl;
	std::cout << "short_map.max_size() = " << short_map.max_size() << std::endl;
	std::cout << "ushort_map.max_size() = " << ushort_map.max_size() << std::endl;
	std::cout << "uint_map.max_size() = " << uint_map.max_size() << std::endl;
	std::cout << "float_map.max_size() = " << float_map.max_size() << std::endl;
	std::cout << "double_map.max_size() = " << double_map.max_size() << std::endl;
	std::cout << "long_long_map.max_size() = " << long_long_map.max_size() << std::endl;
	std::cout << "ulong_long_map.max_size() = " << ulong_long_map.max_size() << std::endl;
	std::cout << "long_double_map.max_size() = " << long_double_map.max_size() << std::endl;

	std::cout << BBLU << "12) KEY COMP" << CRESET << std::endl;


	TESTED_NAMESPACE::map<char,int> map_comp;

	TESTED_NAMESPACE::map<char,int>::key_compare mycomp = map_comp.key_comp();

	map_comp['a']=100;
	map_comp['b']=200;
	map_comp['c']=300;

	std::cout << "map_comp contains:\n";

	char highest = map_comp.rbegin()->first;     // key value of last element

	TESTED_NAMESPACE::map<char,int>::iterator it = map_comp.begin();
	do {
	std::cout << it->first << " => " << it->second << '\n';
	} while ( mycomp((*it++).first, highest) );

	std::cout << BBLU << "13) VALUE COMP" << CRESET << std::endl;

	TESTED_NAMESPACE::map<char,int> map_value_comp;

	TESTED_NAMESPACE::map<char,int>::value_compare mycomp_value = map_value_comp.value_comp();

	map_value_comp['a']=100;
	map_value_comp['b']=200;
	map_value_comp['c']=300;

	std::cout << "map_value_comp contains:\n";

	TESTED_NAMESPACE::pair<char,int> highest_value = *map_value_comp.rbegin();          // last element

	TESTED_NAMESPACE::map<char,int>::iterator it_value = map_value_comp.begin();

	do {
	std::cout << it_value->first << " => " << it_value->second << '\n';
	} while ( mycomp_value(*it_value++, highest_value) );

	std::cout << BBLU << "14) OPERATOR=" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, bool>	map_op_equal;
	TESTED_NAMESPACE::map<int, bool>	map_cpy_equal;

	for(int i = 0; i < 10; i++)
		map_op_equal.insert(TESTED_NAMESPACE::pair<int, bool>(i, i % 2));

	map_cpy_equal = map_op_equal;

	print_map(map_cpy_equal);

	std::cout << BBLU << "15) OPERATOR[]" << CRESET << std::endl;

	TESTED_NAMESPACE::map<char,std::string> map_op_bracket;

	map_op_bracket['a']="an element";
	map_op_bracket['b']="another element";
	map_op_bracket['c']=map_op_bracket['b'];

	std::cout << "map_op_bracket['a'] is " << map_op_bracket['a'] << '\n';
	std::cout << "map_op_bracket['b'] is " << map_op_bracket['b'] << '\n';
	std::cout << "map_op_bracket['c'] is " << map_op_bracket['c'] << '\n';
	std::cout << "map_op_bracket['d'] is " << map_op_bracket['d'] << '\n';

	std::cout << "map_op_bracket now contains " << map_op_bracket.size() << " elements.\n";
	for (TESTED_NAMESPACE::map<char,std::string>::iterator it = map_op_bracket.begin(); it != map_op_bracket.end(); it++)
		std::cout << it->first << " => " << it->second << std::endl;

	std::cout << BBLU << "16) RELATIONAL OPERATORS" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int, int>	my_test;

	for (int i = 1; i < 5; i++)
		my_test.insert(TESTED_NAMESPACE::pair<int, int>(i, i));

	TESTED_NAMESPACE::map<int, int>	my_other_test;
	
	for (int i = 10; i < 50; i += 10)
		my_other_test.insert(TESTED_NAMESPACE::pair<int, int>(i, i));

	TESTED_NAMESPACE::map<int, int>	my_same_test;
	
	for (int i = 10; i < 50; i += 10)
		my_other_test.insert(TESTED_NAMESPACE::pair<int, int>(i, i));

	TESTED_NAMESPACE::map<int, int>	empty_map;
	TESTED_NAMESPACE::map<int, int>	empty_map2;

	/*------------------------------------*/

	std::cout << "test == comp_test: " << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test == my_other_test)
		std::cout << "EQUAL : ==" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	if (my_same_test == my_other_test)
		std::cout << "EQUAL : ==" << std::endl;
	else
		std::cout << "WRONG" << std::endl;
	if (empty_map == empty_map2)
		std::cout << "EQUAL : ==" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;

	std::cout << "test != comp_test: " << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test!= my_other_test)
		std::cout << "DIFFRENT : !=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test < comp_test: " << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test < my_other_test)
		std::cout << "LOWER : <" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test > comp_test: " << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test > my_other_test)
		std::cout << "HIGHER : >" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test <= comp_test: " << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test <= my_other_test)
		std::cout << "LOWER <=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << "--------------------" << std::endl;
	std::cout << "test >= comp_test: " << std::endl;
	std::cout << "MY TEST" << std::endl;
	if (my_test >= my_other_test)
		std::cout << "HIGHER : >=" << std::endl;
	else
		std::cout << "WRONG" << std::endl;

	std::cout << BBLU << "17) INSERTS" << CRESET << std::endl;

	std::cout << BGRN << "a) Single element" << CRESET << std::endl;

	TESTED_NAMESPACE::map<std::string,int> map_insert_1;

	map_insert_1.insert (TESTED_NAMESPACE::make_pair("A" , 100));
	map_insert_1.insert (TESTED_NAMESPACE::make_pair("b" , 300));
	map_insert_1.insert (TESTED_NAMESPACE::make_pair("C" , 400));
	map_insert_1.insert (TESTED_NAMESPACE::make_pair("D" , 200));
	map_insert_1.insert (TESTED_NAMESPACE::make_pair("E", 500));

	print_map(map_insert_1);

	std::cout << BGRN << "b) With hint" << CRESET << std::endl;

	TESTED_NAMESPACE::map<std::string,int>::iterator it_insert_1 = map_insert_1.begin();
	it_insert_1++;
	it_insert_1++;
	map_insert_1.insert (it_insert_1, TESTED_NAMESPACE::make_pair("OHOHOHOH" , 100));
	print_map(map_insert_1);
	std::cout << "-------" << std::endl;
	map_insert_1.insert (map_insert_1.begin(), TESTED_NAMESPACE::make_pair("OHOHOHOH" , 200));
	print_map(map_insert_1);
	std::cout << "-------" << std::endl;
	map_insert_1.insert (map_insert_1.begin(), TESTED_NAMESPACE::make_pair("pouet" , 200));
	print_map(map_insert_1);

	std::cout << BGRN << "c) Range" << CRESET << std::endl;

	TESTED_NAMESPACE::map<std::string,int> map_insert_2;

	map_insert_2.insert (map_insert_1.begin(), map_insert_1.end());

	print_map(map_insert_2);
	std::cout << "-------" << std::endl;
	map_insert_2.insert (map_insert_1.begin(), map_insert_1.end());
	print_map(map_insert_2);
	std::cout << "-------" << std::endl;
	map_insert_2.insert (map_insert_1.begin(), map_insert_1.begin());
	print_map(map_insert_2);
	std::cout << "-------" << std::endl;

	TESTED_NAMESPACE::map<std::string,int> map_insert_3;

	TESTED_NAMESPACE::map<std::string,int>::iterator it_insert_2 = map_insert_1.begin();
	TESTED_NAMESPACE::map<std::string,int>::iterator it_insert_3 = map_insert_1.end();

	it_insert_2++;
	it_insert_2++;
	it_insert_3--;
	it_insert_3--;

	map_insert_3.insert (it_insert_2, it_insert_3);

	print_map(map_insert_3);

	std::cout << BBLU << "18) BEGIN && END" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int ,int> map_begin_end;

	for (int i = 0; i < 5; i++)
		map_begin_end.insert (TESTED_NAMESPACE::make_pair<int, int>(i , i + 5));

	TESTED_NAMESPACE::map<int ,int>::iterator it_be_begin = map_begin_end.begin();
	for (int i = 0; i < 5; i++)
	{
		std::cout << "first  = " << it_be_begin->first <<  "| second = " << it_be_begin->second << std::endl;
		it_be_begin++;
	}
	std::cout << "-------" << std::endl;
	TESTED_NAMESPACE::map<int ,int>::iterator it_be_end = map_begin_end.end();
	for (int i = 0; i < 5; i++)
	{
		it_be_end--;
		std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	}
	std::cout << "-------" << std::endl;
	it_be_begin++;
	it_be_begin++;
	it_be_begin++;
	it_be_begin--;
	std::cout << "first  = " << it_be_begin->first <<  "| second = " << it_be_begin->second << std::endl;
	it_be_begin--;
	std::cout << "first  = " << it_be_begin->first <<  "| second = " << it_be_begin->second << std::endl;
	it_be_begin--;
	std::cout << "first  = " << it_be_begin->first <<  "| second = " << it_be_begin->second << std::endl;
	it_be_begin--;
	std::cout << "first  = " << it_be_begin->first <<  "| second = " << it_be_begin->second << std::endl;
	std::cout << "-------" << std::endl;
	it_be_end++;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end++;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end++;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end--;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end--;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end--;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	
	it_be_end--;



	it_be_end--;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end--;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end++;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;
	it_be_end++;
	it_be_end++;
	std::cout << "first  = " << it_be_end->first <<  "| second = " << it_be_end->second << std::endl;

	std::cout << BBLU << "19) REVERSE BEGIN &&  REVERSE END" << CRESET << std::endl;

	TESTED_NAMESPACE::map<int ,int>::reverse_iterator it_be_rbegin = map_begin_end.rbegin();
	TESTED_NAMESPACE::map<int ,int>::reverse_iterator it_be_rend = map_begin_end.rend();
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin++;
	it_be_rbegin++;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin--;
	it_be_rbegin--;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;
	it_be_rbegin--;
	std::cout << "first  = " << it_be_rbegin->first <<  "| second = " << it_be_rbegin->second << std::endl;

	std::cout << "-------" << std::endl;
	it_be_rend++;
	it_be_end++;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	it_be_rend--;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend--;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend++;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend++;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend++;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
	it_be_rend++;
	std::cout << "first  = end | second = end" << it_be_rend->second << std::endl;
	it_be_rend++;
	std::cout << "first  = " << it_be_rend->first <<  "| second = " << it_be_rend->second << std::endl;
}

#endif