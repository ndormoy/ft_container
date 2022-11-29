#ifndef TESTS_SET_HPP
#define TESTS_SET_HPP

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
#include "../includes/set.hpp"
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
#include <set>
#include <stack>
#include <set>

template <typename T>
void print_set(TESTED_NAMESPACE::set<T> myset)
{
	if (myset.empty())
	{
		std::cout << "set is empty" << std::endl;
		return ;
	}
	for (typename TESTED_NAMESPACE::set<T>::iterator it = myset.begin(); it != myset.end(); ++it)
		std::cout << "value = " << *it << std::endl;
	std::cout << "size = " << myset.size() << std::endl;
}

void	tests_set()
{
		std::cout << BRED << "*******************************" << std::endl;
	std::cout << "<---------TEST set--------->" << std::endl;
	std::cout << "*******************************" << CRESET << std::endl;


	/***********************************************************************************************/

	std::cout << BBLU << "1) CONSTRUCTORS" << CRESET << std::endl;

	std::cout << BGRN << "a) empty constructor" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int> set_empty;

	print_set(set_empty);
	std::cout << "set_empty.size() = " << set_empty.size() << std::endl;

	std::cout << BGRN << "b) range constructor" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int> set_to_copy;

	set_to_copy.insert(20);
	set_to_copy.insert(10);
	set_to_copy.insert(-30);
	set_to_copy.insert(40);
	set_to_copy.insert(50);

	TESTED_NAMESPACE::set<int>	set_range(set_to_copy.begin(), set_to_copy.end()); // Range constructor

	print_set(set_range);

	TESTED_NAMESPACE::set<int>::iterator it_beg = set_to_copy.begin();
	it_beg++;
	it_beg++;
	TESTED_NAMESPACE::set<int>::iterator it_end = set_to_copy.end();
	it_end--;
	TESTED_NAMESPACE::set<int> set_range_2(it_beg, it_end); // Copy constructor
	print_set(set_range_2);

	TESTED_NAMESPACE::set<int>	set_range_3(set_to_copy.begin(), set_to_copy.begin()); // Range constructor	
	print_set(set_range_3);

	std::cout << BGRN << "c) copy constructor" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int> set_copy(set_range); // Copy constructor
	TESTED_NAMESPACE::set<int> set_copy_2(set_range_2); // Copy constructor
	TESTED_NAMESPACE::set<int> set_copy_3(set_range_3); // Copy constructor
	TESTED_NAMESPACE::set<int> set_copy_4(set_empty); // Copy constructor
	print_set(set_copy);
	std::cout << "-------" << std::endl;
	print_set(set_copy_2);
	std::cout << "-------" << std::endl;
	print_set(set_copy_3);
	std::cout << "-------" << std::endl;
	print_set(set_copy_4);

	std::cout << BBLU << "2) CLEAR" << CRESET << std::endl;

	set_copy.clear();
	std::cout << "size = " << set_copy.size() << std::endl;
	set_copy_2.clear();
	std::cout << "size = " << set_copy_2.size() << std::endl;

	std::cout << BBLU << "3) COUNT" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int> set_count;

	std::cout << "set_count.count(20) = " << set_count.count(20) << std::endl;

	set_count.insert(20);

	std::cout << "set_count.count(20) = " << set_count.count(20) << std::endl;

	set_count.insert(20);

	std::cout << "set_count.count(20) = " << set_count.count(20) << std::endl;

	std::cout << BBLU << "4) EMPTY" << CRESET << std::endl;

	std::cout << "set_count.empty() = " << set_count.empty() << std::endl;
	set_count.clear();
	std::cout << "set_count.empty() = " << set_count.empty() << std::endl;

	std::cout << BBLU << "4) LOWER BOUND && UPPER BOUND" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int>	set_bound;

	set_bound.insert(1);
	set_bound.insert(2);
	set_bound.insert(3);
	set_bound.insert(4);

	print_set(set_bound);

	for (int i = 0; i < 6; i++)
	{
		TESTED_NAMESPACE::set<int, char>::iterator it = set_bound.lower_bound(i);
		TESTED_NAMESPACE::set<int, char>::iterator it2 = set_bound.upper_bound(i);
		if (it == set_bound.end())
			std::cout << "lower_bound(" << i << ") = " << "end" << std::endl;
		if (it2 == set_bound.end())
			std::cout << "upper_bound(" << i << ") = " << "end" << std::endl;
		else
		{
			std::cout << "lower_bound[" << i << "] = " << *(set_bound.lower_bound(i))<< std::endl;
			std::cout << "-------" << std::endl;
			std::cout << "upper_bound[" << i << "] = " << *(set_bound.upper_bound(i)) << std::endl;
			std::cout << "-------" << std::endl;
		}
	}
	
	std::cout << BBLU << "5) EQUAL RANGE" << CRESET << std::endl;

	TESTED_NAMESPACE::set<char> set_equal_range;

	set_equal_range.insert('a');
	set_equal_range.insert('b');
	set_equal_range.insert('c');

 	TESTED_NAMESPACE::pair<TESTED_NAMESPACE::set<char>::iterator,TESTED_NAMESPACE::set<char>::iterator> ret;
 	ret = set_equal_range.equal_range('b');

 	std::cout << "lower bound points to: ";
 	std::cout << *ret.first << '\n';

 	std::cout << "upper bound points to: ";
 	std::cout << *ret.second << '\n';

	std::cout << BBLU << "6) ERASE" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int>	set_erase;

	for (int i = 0; i < 5; i++)
		set_erase.insert(i);

	std::cout << BGRN << "a) single element erase" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int>::iterator where = set_erase.find(2);
	set_erase.erase(where);

	std::cout << "-------" << std::endl;
	print_set(set_erase);
	std::cout << "-------" << std::endl;
	
	std::cout << BGRN << "b) erase key" << CRESET << std::endl;

	set_erase.insert(2);

	set_erase.erase(3);
	set_erase.erase(10);

	print_set(set_erase);
	std::cout << "-------" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << BGRN << "c) erase range" << CRESET << std::endl;

	set_erase.insert(3);

	TESTED_NAMESPACE::set<int>::iterator first = set_erase.find(2);
	TESTED_NAMESPACE::set<int>::iterator last = set_erase.find(4);

	print_set(set_erase);
	std::cout << "-------" << std::endl;

	std::cout << "----------------" << std::endl;

	set_erase.erase(first, last);

	print_set(set_erase);
	std::cout << "-------" << std::endl;

	set_erase.clear();

	std::cout << BBLU << "7) FIND" << CRESET << std::endl;

	for (int i = 0; i < 5; i++)
		set_erase.insert(i);

	std::cout << "find(2) = " << *(set_erase.find(2)) << " | " << *(set_erase.find(2)) << std::endl;
	if (set_erase.find(10) == set_erase.end())
		std::cout << "find(10) = end" << std::endl;

	std::cout << BBLU << "8) SWAP" << CRESET << std::endl;

	TESTED_NAMESPACE::set<char>	foo, bar, pouet;

	foo.insert('x');
	foo.insert('y');

	bar.insert('a');
	bar.insert('b');
	bar.insert('c');

	foo.swap(bar);

	std::cout << "foo contains:\n";
	print_set(foo);

	std::cout << "bar contains:\n";
	print_set(bar);

	foo.swap(pouet);
	std::cout << "foo contains:\n";
	print_set(foo);
	std::cout << "pouet contains:\n";
	print_set(pouet);

	std::cout << BBLU << "9) GET ALLOCATOR" << CRESET << std::endl;

	std::cout << "allocator = " << foo.get_allocator().max_size() << std::endl;
	std::cout << "allocator = " << pouet.get_allocator().max_size() << std::endl;
	std::cout << "allocator = " << bar.get_allocator().max_size() << std::endl;
	std::cout << "allocator = " << set_erase.get_allocator().max_size() << std::endl;

	std::cout << BBLU << "10) MAX SIZE" << CRESET << std::endl;

	TESTED_NAMESPACE::set<long> long_set;
	TESTED_NAMESPACE::set<char> char_set;
	TESTED_NAMESPACE::set<unsigned char> uchar_set;
	TESTED_NAMESPACE::set<short> short_set;
	TESTED_NAMESPACE::set<unsigned short> ushort_set;
	TESTED_NAMESPACE::set<unsigned int> uint_set;
	TESTED_NAMESPACE::set<float> float_set;
	TESTED_NAMESPACE::set<double> double_set;
	TESTED_NAMESPACE::set<long long> long_long_set;
	TESTED_NAMESPACE::set<unsigned long long> ulong_long_set;
	TESTED_NAMESPACE::set<long double> long_double_set;

	std::cout << "long_set.max_size() = " << long_set.max_size() << std::endl;
	std::cout << "char_set.max_size() = " << char_set.max_size() << std::endl;
	std::cout << "uchar_set.max_size() = " << uchar_set.max_size() << std::endl;
	std::cout << "short_set.max_size() = " << short_set.max_size() << std::endl;
	std::cout << "ushort_set.max_size() = " << ushort_set.max_size() << std::endl;
	std::cout << "uint_set.max_size() = " << uint_set.max_size() << std::endl;
	std::cout << "float_set.max_size() = " << float_set.max_size() << std::endl;
	std::cout << "double_set.max_size() = " << double_set.max_size() << std::endl;
	std::cout << "long_long_set.max_size() = " << long_long_set.max_size() << std::endl;
	std::cout << "ulong_long_set.max_size() = " << ulong_long_set.max_size() << std::endl;
	std::cout << "long_double_set.max_size() = " << long_double_set.max_size() << std::endl;

	std::cout << BBLU << "11) KEY COMP" << CRESET << std::endl;


	TESTED_NAMESPACE::set<char> set_comp;

	TESTED_NAMESPACE::set<char>::key_compare mycomp = set_comp.key_comp();

	set_comp.insert('a');
	set_comp.insert('b');
	set_comp.insert('c');

	std::cout << "set_comp contains:\n";

	char highest = *(set_comp.rbegin());     // key value of last element

	TESTED_NAMESPACE::set<char>::iterator it = set_comp.begin();
	do {
	std::cout << *it << '\n';
	} while ( mycomp((*it++), highest) );

	std::cout << BBLU << "12) VALUE COMP" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int> myset;

	TESTED_NAMESPACE::set<int>::value_compare mycomp_2 = myset.value_comp();

	for (int i=0; i<=5; i++) myset.insert(i);

	std::cout << "myset contains:";

	int highest_2=*myset.rbegin();
	TESTED_NAMESPACE::set<int>::iterator it_2=myset.begin();
	do {
	std::cout << ' ' << *it_2;
	} while ( mycomp_2(*(++it_2),highest_2) );

	std::cout << '\n';

	std::cout << BBLU << "13) OPERATOR=" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int>	set_op_equal;
	TESTED_NAMESPACE::set<int>	set_cpy_equal;

	for(int i = 0; i < 10; i++)
		set_op_equal.insert(i);

	set_cpy_equal = set_op_equal;

	print_set(set_cpy_equal);

	std::cout << BBLU << "14) RELATIONAL OPERATORS" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int>	my_test;

	for (int i = 1; i < 5; i++)
		my_test.insert(i);

	TESTED_NAMESPACE::set<int>	my_other_test;
	
	for (int i = 10; i < 50; i += 10)
		my_other_test.insert(i);

	TESTED_NAMESPACE::set<int>	my_same_test;
	
	for (int i = 10; i < 50; i += 10)
		my_other_test.insert(i);

	TESTED_NAMESPACE::set<int>	empty_set;
	TESTED_NAMESPACE::set<int>	empty_set2;

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
	if (empty_set == empty_set2)
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

	std::cout << BBLU << "15) INSERTS" << CRESET << std::endl;

	std::cout << BGRN << "a) Single element" << CRESET << std::endl;

	TESTED_NAMESPACE::set<std::string> set_insert_1;

	set_insert_1.insert ("A");
	set_insert_1.insert ("b");
	set_insert_1.insert ("C");
	set_insert_1.insert ("D");
	set_insert_1.insert ("E");

	print_set(set_insert_1);

	std::cout << BGRN << "b) With hint" << CRESET << std::endl;

	TESTED_NAMESPACE::set<std::string>::iterator it_insert_1 = set_insert_1.begin();
	it_insert_1++;
	it_insert_1++;
	set_insert_1.insert (it_insert_1, "OHOHOHOH");
	print_set(set_insert_1);
	std::cout << "-------" << std::endl;
	set_insert_1.insert (set_insert_1.begin(), "OHOHOHOH");
	print_set(set_insert_1);
	std::cout << "-------" << std::endl;
	set_insert_1.insert (set_insert_1.begin(), "pouet");
	print_set(set_insert_1);

	std::cout << BGRN << "c) Range" << CRESET << std::endl;

	TESTED_NAMESPACE::set<std::string> set_insert_2;

	set_insert_2.insert (set_insert_1.begin(), set_insert_1.end());

	print_set(set_insert_2);
	std::cout << "-------" << std::endl;
	set_insert_2.insert (set_insert_1.begin(), set_insert_1.end());
	print_set(set_insert_2);
	std::cout << "-------" << std::endl;
	set_insert_2.insert (set_insert_1.begin(), set_insert_1.begin());
	print_set(set_insert_2);
	std::cout << "-------" << std::endl;

	TESTED_NAMESPACE::set<std::string> set_insert_3;

	TESTED_NAMESPACE::set<std::string>::iterator it_insert_2 = set_insert_1.begin();
	TESTED_NAMESPACE::set<std::string>::iterator it_insert_3 = set_insert_1.end();

	it_insert_2++;
	it_insert_2++;
	it_insert_3--;
	it_insert_3--;

	set_insert_3.insert (it_insert_2, it_insert_3);

	print_set(set_insert_3);

	std::cout << BBLU << "16) BEGIN && END" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int> set_begin_end;

	for (int i = 0; i < 5; i++)
		set_begin_end.insert (i);

	TESTED_NAMESPACE::set<int>::iterator it_be_begin = set_begin_end.begin();
	for (int i = 0; i < 5; i++)
	{
		std::cout << "first  = " << *it_be_begin << std::endl;
		it_be_begin++;
	}
	std::cout << "-------" << std::endl;
	TESTED_NAMESPACE::set<int>::iterator it_be_end = set_begin_end.end();
	for (int i = 0; i < 5; i++)
	{
		it_be_end--;
		std::cout << "first  = " << *it_be_end<< std::endl;
	}
	std::cout << "-------" << std::endl;
	it_be_begin++;
	it_be_begin++;
	it_be_begin++;
	it_be_begin--;
	std::cout << "first  = " << *it_be_begin << std::endl;
	it_be_begin--;
	std::cout << "first  = " << *it_be_begin << std::endl;
	it_be_begin--;
	std::cout << "first  = " << *it_be_begin << std::endl;
	it_be_begin--;
	std::cout << "first  = " << *it_be_begin << std::endl;
	std::cout << "-------" << std::endl;
	it_be_end++;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end++;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end++;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end--;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end--;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end--;
	std::cout << "first  = " << *it_be_end << std::endl;
	
	it_be_end--;



	it_be_end--;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end--;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end++;
	std::cout << "first  = " << *it_be_end << std::endl;
	it_be_end++;
	it_be_end++;
	std::cout << "first  = " << *it_be_end << std::endl;

	std::cout << BBLU << "17) REVERSE BEGIN &&  REVERSE END" << CRESET << std::endl;

	TESTED_NAMESPACE::set<int>::reverse_iterator it_be_rbegin = set_begin_end.rbegin();
	TESTED_NAMESPACE::set<int>::reverse_iterator it_be_rend = set_begin_end.rend();
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin++;
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin++;
	it_be_rbegin++;
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin--;
	it_be_rbegin--;
	std::cout << "first  = " << *it_be_rbegin << std::endl;
	it_be_rbegin--;
	std::cout << "first  = " << *it_be_rbegin << std::endl;

	std::cout << "-------" << std::endl;
	it_be_rend++;
	it_be_end++;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	it_be_rend--;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend--;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend++;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend++;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend++;
	std::cout << "first  = " << *it_be_rend << std::endl;
	it_be_rend++;
	std::cout << "first  = end " << std::endl;
	it_be_rend++;
	std::cout << "first  = " << *it_be_rend << std::endl;
}

#endif