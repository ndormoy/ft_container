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
#include "includes/set.hpp"
#include "includes/set.hpp"
#include "includes/red_black_tree.hpp"
#include "includes/red_black_tree_iterator.hpp"
#include "includes/map.hpp"
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
#include <set>
#include <stack>
#include <set>

bool pred_function (int i, int j) {
  return (i == j);
}

bool other_pred_function (int i, int j) {
  return (i != j);
}

template <typename T>
void print_vector(TESTED_NAMESPACE::vector<T> myvector)
{
	for (typename TESTED_NAMESPACE::vector<T>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << *(it) << std::endl;
	std::cout << "size = " << myvector.size() << std::endl;
	std::cout << "capacity = " << myvector.capacity() << std::endl;
}

template <typename T>
void print_stack(TESTED_NAMESPACE::stack<T> mystack)
{
	if (mystack.empty())
		std::cout << "stack is empty" << std::endl;
	else
	{
		std::cout << "stack is not empty" << std::endl;
		std::cout << "top = " << mystack.top() << std::endl;
		std::cout << "size = " << mystack.size() << std::endl;
		std::cout << "empty = " << mystack.empty() << std::endl;
		while (!mystack.empty())
		{
			std::cout << mystack.top() << std::endl;
			mystack.pop();
		}
	}
}

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



int main()
{
	{
		std::cout << BRED << "*******************************" << std::endl;
		std::cout << "<---------TEST FUNCTIONS--------->" << std::endl;
		std::cout << "*******************************" << CRESET << std::endl;

		std::cout << BBLU << "1) IS INTEGRAL" << CRESET << std::endl;

		std::cout << std::boolalpha;
		std::cout << "is_integral:" << std::endl;
		const bool ret = ft::is_integral<char>::value;
		if (ret != true)
			std::cout << "WRONG --> YOUR FUNCTION IS NOT WORKING !" << std::endl;
		else
			std::cout << "OK" << std::endl;
		const bool ret_2 = ft::is_integral<int>::value;
		if (ret_2 != true)
			std::cout << "WRONG --> YOUR FUNCTION IS NOT WORKING !" << std::endl;
		else
			std::cout << "OK" << std::endl;
		const bool ret_3 = ft::is_integral<float>::value;
		if (ret_3 != false)
			std::cout << "WRONG --> YOUR FUNCTION IS NOT WORKING !" << std::endl;
		else
			std::cout << "OK" << std::endl;

		std::cout << BBLU << "2) PAIR" << CRESET << std::endl;

		TESTED_NAMESPACE::pair<int, char> pair;

		pair.first = 42;
		pair.second = 'A';

		std::cout << pair.first << " ";
		std::cout << pair.second << std::endl;

		std::cout << BBLU << "3) MAKE PAIR" << CRESET << std::endl;

		TESTED_NAMESPACE::pair<int, char> pair_2 = TESTED_NAMESPACE::make_pair(42, 'A');

		std::cout << pair_2.first << " ";
		std::cout << pair_2.second << std::endl;

		std::cout << BBLU << "4) EQUAL" << CRESET << std::endl;

		int tab[] = {20,40,60,80,100};

		TESTED_NAMESPACE::vector<int> vector_equal (tab,tab + 5);

		// using default comparison:
		if ( TESTED_NAMESPACE::equal (vector_equal.begin(), vector_equal.end(), tab) )
		std::cout << "The contents of both sequences are equal.\n";
		else
		std::cout << "The contents of both sequences differ.\n";
		vector_equal[3]=81;

		// using predicate comparison:
		if ( TESTED_NAMESPACE::equal (vector_equal.begin(), vector_equal.end(), tab, pred_function) )
		std::cout << "The contents of both sequences are equal.\n";
		else
		std::cout << "The contents of both sequences differ.\n";

		if ( TESTED_NAMESPACE::equal (vector_equal.begin(), vector_equal.end(), tab, other_pred_function) )
		std::cout << "The contents of both sequences are equal.\n";
		else
		std::cout << "The contents of both sequences differ.\n";
	}
	

	{
		std::cout << BRED << "*******************************" << std::endl;
		std::cout << "<---------TEST VECTOR--------->" << std::endl;
		std::cout << "*******************************" << CRESET << std::endl;

    	/***********************************************************************************************/
		std::cout << BBLU << "1) ASSIGN" << CRESET << std::endl;

		std::cout << BGRN << "a) FILL ASSIGN" << CRESET << std::endl;


		TESTED_NAMESPACE::vector<int> test;

		test.push_back(1);
		test.push_back(2);
		test.push_back(3);


		int pouet = 42;
		int	&ref = pouet;

		test.assign(4, ref);

		for (TESTED_NAMESPACE::vector<int>::iterator my_it = test.begin(); my_it != test.end(); ++my_it)
			std::cout << *my_it << std::endl;
		std::cout << "Size = " << test.size() << std::endl;
		std::cout << "Capacity = " << test.capacity() << std::endl;
		std::cout << "begin = " << test.begin()[0] << std::endl;

		test.assign(10, ref);

		for (TESTED_NAMESPACE::vector<int>::iterator my_it = test.begin(); my_it != test.end(); ++my_it)
			std::cout << *my_it << std::endl;
		std::cout << "Size = " << test.size() << std::endl;
		std::cout << "Capacity = " << test.capacity() << std::endl;
		std::cout << "begin = " << test.begin()[0] << std::endl;

		std::cout << BGRN << "b)  ASSIGN" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int> first;
		TESTED_NAMESPACE::vector<int> second;
		TESTED_NAMESPACE::vector<int> third;

		first.assign (7,100);             // 7 ints with a value of 100

		TESTED_NAMESPACE::vector<int>::iterator it;
		it=first.begin()+1;

		second.assign (it,first.end()-1); // the 5 central values of first

		int myints[] = {1776,7,4};
		third.assign (myints,myints+3);   // assigning from array.

		std::cout << "Size of first: " << int (first.size()) << '\n';
		std::cout << "Size of second: " << int (second.size()) << '\n';
		std::cout << "Size of third: " << int (third.size()) << '\n';

		/************************************************************************************************/

		std::cout << BBLU << "2) AT" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int> test_one;

		test_one.push_back(-20);
		test_one.push_back(-10);
		test_one.push_back(1);
		test_one.push_back(2);
		test_one.push_back(3);


		std::cout << BGRN << "a) AT" << CRESET << std::endl;

		// try {
		// std::cout << "at 50 = " << test_one.at(50) << std::endl;
		// }
		// catch (std::out_of_range err) 
		// {
    	//     std::cout << err.what() << std::endl;
		// }

		std::cout << "at 0 = " << test_one.at(0) << std::endl;
		std::cout << "at 1 = " << test_one.at(1) << std::endl;
		std::cout << "at 2 = " << test_one.at(2) << std::endl;
		std::cout << "at 3 = " << test_one.at(3) << std::endl;
		std::cout << "at 4 = " << test_one.at(4) << std::endl;

		std::cout << BGRN << "b) CONST AT" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int> test_two;

		test_two.push_back(-20);
		test_two.push_back(-10);
		test_two.push_back(1);
		test_two.push_back(2);
		test_two.push_back(3);

		test_two.at(0) = 5;
		test_two.at(1)  = 10;
		test_two.at(2) = 15;
		test_two.at(3)  = 20;
		test_two.at(4) = 25;


		std::cout << "at 0 = " << test_two.at(0) << std::endl;
		std::cout << "at 1 = " << test_two.at(1) << std::endl;
		std::cout << "at 2 = " << test_two.at(2) << std::endl;
		std::cout << "at 3 = " << test_two.at(3) << std::endl;
		std::cout << "at 4 = " << test_two.at(4) << std::endl;



		/************************************************************************************************/

		std::cout << BBLU << "3) BACK" << CRESET << std::endl;



		// std::cout << test_two.back() << std::endl;

		std::cout << test_one.back() << std::endl;
		std::cout << test_two.back() << std::endl;

		for (TESTED_NAMESPACE::vector<int>::iterator it = test_one.begin(); it != test_one.end(); it++)
		{
			std::cout << *it << std::endl;
		}


		TESTED_NAMESPACE::vector<int> test_three;

		test_three.push_back(10);

		while (test_three.back() != 0)
		{
		test_three.push_back ( test_three.back() -1 );
		}

		std::cout << "test_three contains:";
		for (unsigned i=0; i<test_three.size() ; i++)
		std::cout << ' ' << test_three[i];
		std::cout << '\n';

		/************************************************************************************************/

		std::cout << BBLU << "4) BEGIN" << CRESET << std::endl;

		std::cout << "begin = " << *(test_one.begin()) << std::endl;
		std::cout << "begin = " << *(test_two.begin()) << std::endl;
		std::cout << "begin = " << *(test_three.begin()) << std::endl;

		/************************************************************************************************/

		std::cout << BBLU << "5) END" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int>::iterator my_it_ret = test_one.end();
		if (*my_it_ret)
			std::cout << "end = " << *(my_it_ret) << std::endl;
		TESTED_NAMESPACE::vector<int>::iterator it_one = test_one.end();
		it_one--;
		std::cout << "end = " << *it_one << std::endl;

		my_it_ret = test_two.end();
		if (*my_it_ret)
			std::cout << "end = " << *(my_it_ret) << std::endl;
		TESTED_NAMESPACE::vector<int>::iterator it_two = test_two.end();
		it_two--;
		std::cout << "end = " << *it_one << std::endl;

		my_it_ret = test_three.end();
		if (*my_it_ret)
			std::cout << "end = " << *(my_it_ret) << std::endl;
		TESTED_NAMESPACE::vector<int>::iterator it_three = test_three.end();
		it_three--;
		std::cout << "end = " << *it_one << std::endl;

		/************************************************************************************************/

		std::cout << BBLU << "6) CLEAR" << CRESET << std::endl;

    	test_one.clear();
		std::cout << "begin = " << *(test_one.begin()) << std::endl;
		std::cout << "end = " << *(test_one.end()) << std::endl;
		std::cout << "size = " << test_one.size() << std::endl;
		std::cout << "capacity = " << test_one.capacity() << std::endl;
		test_two.clear();
		std::cout << "begin = " << *(test_two.begin()) << std::endl;
		std::cout << "end = " << *(test_two.end()) << std::endl;
		std::cout << "size = " << test_two.size() << std::endl;
		std::cout << "capacity = " << test_two.capacity() << std::endl;
		test_three.clear();
		std::cout << "begin = " << *(test_three.begin()) << std::endl;
		std::cout << "end = " << *(test_three.end()) << std::endl;
		std::cout << "size = " << test_three.size() << std::endl;
		std::cout << "capacity = " << test_three.capacity() << std::endl;

    	/************************************************************************************************/

		std::cout << BBLU << "7) EMPTY" << CRESET << std::endl;

		std::cout << "empty = " << test_one.empty() << std::endl;
		std::cout << "empty = " << test_two.empty() << std::endl;
		std::cout << "empty = " << test_three.empty() << std::endl;
		test_three.push_back(1);
		std::cout << "empty = " << test_three.empty() << std::endl;
		test_three.clear();

		/************************************************************************************************/

		std::cout << BBLU << "8) ERASE" << CRESET << std::endl;

		std::cout << BGRN << "a) erase position" << CRESET << std::endl;

		test_one.push_back(2);
		test_one.push_back(4);
		test_one.push_back(6);
		test_one.push_back(8);
		test_one.push_back(10);
		test_one.push_back(12);

		std::cout << "erase 1st element = " << *(test_one.erase(test_one.begin())) << CRESET << std::endl;
		std::cout << "erase last element = " << *(test_one.erase(test_one.end() - 1)) << std::endl;
		std::cout << "New last element = " << *(test_one.end()) << CRESET << std::endl;
		print_vector(test_one);
		std::cout << "erase 6 = " << *(test_one.erase(test_one.begin() + 1)) << std::endl;
		std::cout << "erase begin = " << *(test_one.erase(test_one.begin())) << std::endl;
		std::cout << "erase begin = " << *(test_one.erase(test_one.begin())) << std::endl;
		print_vector(test_one);
		std::cout << "erase begin = " << *(test_one.erase(test_one.begin())) << std::endl;
		std::cout << "nothing in here" << std::endl;
		print_vector(test_one);
		std::cout << "-----------" << std::endl;

		test_one.clear();

		std::cout << BGRN << "b) erase range" << CRESET << std::endl;

		test_two.push_back(2);
		test_two.push_back(4);
		test_two.push_back(6);
		test_two.push_back(8);
		test_two.push_back(10);
		test_two.push_back(12);

		std::cout << "Erase all = ";
		std::cout << *(test_two.erase(test_two.begin(), test_two.end())) << std::endl;
		print_vector(test_two);
		std::cout << "empty = " << test_two.empty() << std::endl;

		test_two.clear();

		test_three.push_back(2);
		test_three.push_back(4);
		test_three.push_back(6);
		test_three.push_back(8);
		test_three.push_back(10);
		test_three.push_back(12);

		std::cout << "Erase 4 to 12 = " << *(test_three.erase(test_three.begin() + 1, test_three.end() - 1)) << std::endl;
		print_vector(test_three);
		std::cout << "erase same = : " << *(test_three.erase(test_three.begin(), test_three.begin())) << std::endl;
		print_vector(test_three);

		test_three.clear();

		/************************************************************************************************/

		std::cout << BBLU << "9) FRONT" << CRESET << std::endl;

		test_one.push_back(2);
		test_one.push_back(4);
		test_one.push_back(6);
		test_one.push_back(8);
		test_one.push_back(10);
		test_one.push_back(12);

		int & hello = test_one.front();
		std::cout << "front = " <<  hello << std::endl;
		hello = 50;
		std::cout << "front = " <<  test_one.front() << std::endl;

		test_one.clear();
		print_vector(test_one);
		std::cout << "empty front = " <<  test_one.front() << std::endl;

		/************************************************************************************************/

		std::cout << BBLU << "10) GET ALLOCATOR" << CRESET << std::endl;

		std::vector<int> my_alloc_vector;
		int * p;
		unsigned int i;

		// allocate an array with space for 5 elements using vector's allocator:
		p = my_alloc_vector.get_allocator().allocate(5);

		// construct values in-place on the array:
		for (i=0; i<5; i++) my_alloc_vector.get_allocator().construct(&p[i],i);

		std::cout << "The allocated array contains:";
		for (i=0; i<5; i++) std::cout << ' ' << p[i];
		std::cout << '\n';

		// destroy and deallocate:
		for (i=0; i<5; i++) my_alloc_vector.get_allocator().destroy(&p[i]);
		my_alloc_vector.get_allocator().deallocate(p,5);

		my_alloc_vector.clear();

		/************************************************************************************************/

		std::cout << BBLU << "11) INSERT" << CRESET << std::endl;

		std::cout << BGRN << "a) insert single element" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int> insert_vector;

		insert_vector.insert(insert_vector.begin(), 2);
		insert_vector.insert(insert_vector.begin(), 4);
		insert_vector.insert(insert_vector.begin(), 6);
		insert_vector.insert(insert_vector.end(), 8);
		print_vector(insert_vector);
		std::cout << "-------" << std::endl;
		TESTED_NAMESPACE::vector<int>::iterator okit = insert_vector.begin();
		okit++;
		insert_vector.insert(okit, 60);
		print_vector(insert_vector);
		std::cout << "-------" << std::endl;
		okit = insert_vector.begin();
		okit++;
		okit++;
		okit++;
		okit++;
		okit++;
		insert_vector.insert(okit, 80);
		print_vector(insert_vector);

		insert_vector.clear();

		std::cout << "-------------------------" << std::endl;

		TESTED_NAMESPACE::vector<std::string> string_vector;

		string_vector.insert(string_vector.begin(), "a");
		string_vector.insert(string_vector.begin(), "b");
		string_vector.insert(string_vector.begin(), "c");
		string_vector.insert(string_vector.begin(), "d");

		print_vector(string_vector);



		std::cout << "-------" << std::endl;

		TESTED_NAMESPACE::vector<std::string>::iterator string_it = string_vector.begin();
		string_it++;
		string_it++;
		string_vector.insert(string_it, "pouet");
		print_vector(string_vector);

		string_vector.clear();

		std::cout << BGRN << "b) insert range" << CRESET << std::endl;

		insert_vector.insert(insert_vector.begin(), 2);
		insert_vector.insert(insert_vector.begin(), 4);
		insert_vector.insert(insert_vector.begin(), 6);
		insert_vector.insert(insert_vector.end(), 8);

		test_two.insert(test_two.begin(), insert_vector.begin(), insert_vector.end());

    	print_vector(test_two);
		std::cout << "-------" << std::endl;
		test_two.insert(test_two.begin() + 2, insert_vector.begin(), insert_vector.end());
		print_vector(test_two);
		std::cout << "-------" << std::endl;
		test_two.insert(test_two.begin() + 4, insert_vector.begin(), insert_vector.begin() + 2);
		print_vector(test_two);

    	std::cout << "-------" << std::endl;
		test_two.clear();

		std::cout << BGRN << "c) insert fill" << CRESET << std::endl;

		insert_vector.insert(insert_vector.begin() + 2, 5, 42);
		std::cout << std::endl;
		print_vector(insert_vector);
		std::cout << "-------" << std::endl;

		insert_vector.clear();
		insert_vector.insert(insert_vector.begin(), 5, 84);
		print_vector(insert_vector);

		try
		{
			insert_vector.insert(insert_vector.begin(), 1000000000000000000, 84);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		insert_vector.clear();

		/************************************************************************************************/

		std::cout << BBLU << "12) MAX SIZE" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<long> long_vector;
		TESTED_NAMESPACE::vector<char> char_vector;
		TESTED_NAMESPACE::vector<unsigned char> uchar_vector;
		TESTED_NAMESPACE::vector<short> short_vector;
		TESTED_NAMESPACE::vector<unsigned short> ushort_vector;
		TESTED_NAMESPACE::vector<unsigned int> uint_vector;
		TESTED_NAMESPACE::vector<float> float_vector;
		TESTED_NAMESPACE::vector<double> double_vector;
		TESTED_NAMESPACE::vector<long long> long_long_vector;
		TESTED_NAMESPACE::vector<unsigned long long> ulong_long_vector;
		TESTED_NAMESPACE::vector<long double> long_double_vector;


		std::cout << "Vector int --> Max size = " << test_one.max_size() << std::endl;
		std::cout << "Vector std::string --> Max size = " << string_vector.max_size() << std::endl;
		std::cout << "Vector char --> Max size = " << char_vector.max_size() << std::endl;
		std::cout << "Vector unsigned char --> Max size = " << uchar_vector.max_size() << std::endl;
		std::cout << "Vector short --> Max size = " << short_vector.max_size() << std::endl;
		std::cout << "Vector unsigned short --> Max size = " << ushort_vector.max_size() << std::endl;
		std::cout << "Vector unsigned int --> Max size = " << uint_vector.max_size() << std::endl;
		std::cout << "Vector float --> Max size = " << float_vector.max_size() << std::endl;
		std::cout << "Vector double --> Max size = " << double_vector.max_size() << std::endl;
		std::cout << "Vector long long --> Max size = " << long_long_vector.max_size() << std::endl;
		std::cout << "Vector unsigned long long --> Max size = " << ulong_long_vector.max_size() << std::endl;
		std::cout << "Vector long double --> Max size = " << long_double_vector.max_size() << std::endl;

		/************************************************************************************************/

		std::cout << BBLU << "13) OPERATOR[]" << CRESET << std::endl;

		for (int i = 0; i < 8; i++)
			test_one.insert(test_one.begin() + i, i);

		for (int i = 0; i < 8; i++)
			std::cout << "test_one[" << i << "] = " << test_one[i] << std::endl;

		test_one[2] = 42;
		test_one[3] = 43;
		test_one[4] = 44;
		test_one[5] = 45;

		print_vector(test_one);

		// test[50] = 433333; //TODO Have to segfault, todo in bash script

		/************************************************************************************************/

		std::cout << BBLU << "14) OPERATOR=" << CRESET << std::endl;

		print_vector(test_two);
		std::cout << "-------" << std::endl;
		test_two = test_one;
		print_vector(test_two);
		std::cout << "-------" << std::endl;

		test_two.insert(test_two.begin(), 666);
		print_vector(test_one);
		std::cout << "-------" << std::endl;
		print_vector(test_two);
		std::cout << "-------" << std::endl;

		test_one.clear();
		test_two.clear();

		/************************************************************************************************/

		std::cout << BBLU << "15) POP BACK" << CRESET << std::endl;

		test_one.insert(test_one.begin(), 2);
		test_one.insert(test_one.begin(), 4);
		test_one.insert(test_one.begin(), 6);
		test_one.insert(test_one.begin(), 8);

		print_vector(test_one);
		std::cout << "-------" << std::endl;
		test_one.pop_back();
		print_vector(test_one);
		std::cout << "-------" << std::endl;
		test_one.pop_back();
		print_vector(test_one);
		std::cout << "-------" << std::endl;
		test_one.pop_back();
		print_vector(test_one);
		std::cout << "-------" << std::endl;
		test_one.pop_back();
		print_vector(test_one);
		std::cout << "-------" << std::endl;
		try
		{
			test_one.pop_back();
			print_vector(test_one);
			std::cout << "-------" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		test_one.clear();

		/************************************************************************************************/

		std::cout << BBLU << "16) PUSH BACK" << CRESET << std::endl;

		test_one.push_back(10);
		test_one.push_back(20);
		test_one.push_back(30);
		test_one.push_back(40);
		test_one.push_back(50);
		test_one.push_back(60);
		print_vector(test_one);

		/************************************************************************************************/

		std::cout << BBLU << "17) RBEGIN && REND" << CRESET << std::endl;

		for (TESTED_NAMESPACE::vector<int>::reverse_iterator rit = test_one.rbegin(); rit != test_one.rend(); ++rit)
			std::cout << *(rit) << std::endl;
		std::cout << "-------" << std::endl;
		for (TESTED_NAMESPACE::vector<int>::const_reverse_iterator rit = test_one.rbegin(); rit != test_one.rend(); ++rit)
			std::cout << *(rit) << std::endl;
		std::cout << "-------" << std::endl;
		for (TESTED_NAMESPACE::vector<int>::reverse_iterator rit = test_one.rend(); rit != test_one.rbegin(); rit--)
			std::cout << *(rit) << std::endl;
		std::cout << "-------" << std::endl;
		for (TESTED_NAMESPACE::vector<int>::const_reverse_iterator rit = test_one.rend(); rit != test_one.rbegin(); rit--)
			std::cout << *(rit) << std::endl;
		std::cout << "-------" << std::endl;
		TESTED_NAMESPACE::vector<int>::reverse_iterator rit = test_one.rend();
		rit--;
		std::cout << *(rit) << std::endl;
		rit++;
		std::cout << *(rit) << std::endl;
		rit = test_one.rbegin();
		rit++;
		rit++;
		std::cout << *(rit) << std::endl;
		rit--;
    	std::cout << *(rit) << std::endl;

		test_one.clear();

		/************************************************************************************************/

		std::cout << BBLU << "18) RESERVE" << CRESET << std::endl;

		for (int i = 0; i < 10; i++)
			test_one.push_back(i);
		print_vector(test_one);
		std::cout << "-------" << std::endl;
		test_one.clear();
		test_two.reserve(50);
		for (int i = 0; i < 100; i++)
		{
			std::cout << "Capacity before = " << test_two.capacity() << std::endl;
			test_two.push_back(i);
			std::cout << "Capacity after = " << test_two.capacity() << std::endl;
		}
		test_two.clear();
		print_vector(test_two);
		print_vector(test_one);

		/************************************************************************************************/

		std::cout << BBLU << "19) RESIZE" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int> test_four;

		for (int i = 0; i < 100; i++)
		{
			std::cout << "Capacity before = " << test_four.capacity() << std::endl;
			test_four.insert(test_four.begin() + i, i);
			std::cout << "Capacity after = " << test_four.capacity() << std::endl;
		}

		std::cout << "size = " << test_four.size() << std::endl;
		std::cout << "capacity = " << test_four.capacity() << std::endl;
		print_vector(test_four);

		test_four.resize(1);

		std::cout << "size = " << test_four.size() << std::endl;
		std::cout << "capacity = " << test_four.capacity() << std::endl;
		print_vector(test_four);

		test_four.clear();

		std::cout << BBLU << "15) SWAP" << CRESET << std::endl;

		for (int i = 0; i < 10; i++)
			test_three.push_back(i);

		for (int i = 50; i < 55; i++)
			test_four.push_back(i);

		std::cout << "capacity = " << test_three.capacity() << std::endl;
		std::cout << "capacity = " << test_four.capacity() << std::endl;
		std::cout << "-------" << std::endl;
		print_vector(test_three);
		std::cout << "-------" << std::endl;
		print_vector(test_four);

		std::cout << "Swaping[.....]" << std::endl;

		test_three.swap(test_four);

		std::cout << "capacity = " << test_three.capacity() << std::endl;
		std::cout << "capacity = " << test_four.capacity() << std::endl;
		print_vector(test_three);
		std::cout << "-------" << std::endl;
		print_vector(test_four);
		std::cout << "-------" << std::endl;

		std::cout << BBLU << "20) RELATIONAL OPERATORS" << CRESET << std::endl;

		/*------------------------------------*/

		TESTED_NAMESPACE::vector<int>	my_test;

		my_test.push_back(1);
		my_test.push_back(2);
		my_test.push_back(3);
		my_test.push_back(4);

		TESTED_NAMESPACE::vector<int>	my_other_test;

		my_other_test.push_back(10);
		my_other_test.push_back(20);
		my_other_test.push_back(30);
		my_other_test.push_back(40);

		TESTED_NAMESPACE::vector<int>	my_same_test;

		my_same_test.push_back(10);
		my_same_test.push_back(20);
		my_same_test.push_back(30);
		my_same_test.push_back(40);

		TESTED_NAMESPACE::vector<int>	empty_vector;
		TESTED_NAMESPACE::vector<int>	empty_vector2;

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
		if (empty_vector == empty_vector2)
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

		std::cout << BBLU << "21) CONSTRUCTORS" << CRESET << std::endl;


		std::cout << BGRN << "a) default constructor" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int>	construct_test(20, 42);
		TESTED_NAMESPACE::vector<int>	construct_test_2(0, 42);

		print_vector(construct_test);
		print_vector(construct_test_2);

		std::cout << BGRN << "b) fill constructor" << CRESET << std::endl;

		try
		{
			TESTED_NAMESPACE::vector<int>	construct_test_3(500000000000000000, 42);
			print_vector(construct_test_3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		TESTED_NAMESPACE::vector<int>	construct_test_4(10, 42);
		print_vector(construct_test_4);

		std::cout << BGRN << "c) range constructor" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int> vector_to_cpy;

		for (int i = 0; i < 10; i++)
			vector_to_cpy.push_back(i);

		TESTED_NAMESPACE::vector<int>	construct_test_5(vector_to_cpy.begin(), vector_to_cpy.end());
		TESTED_NAMESPACE::vector<int>	construct_test_6(vector_to_cpy.begin() + 3, vector_to_cpy.end() - 2);
		print_vector(construct_test_5);
		std::cout << "-------" << std::endl;
		print_vector(construct_test_6);
		std::cout << "-------" << std::endl;

		std::cout << BGRN << "d) copy constructor" << CRESET << std::endl;

		TESTED_NAMESPACE::vector<int>	construct_test_7(construct_test_5);
		print_vector(construct_test_7);
		TESTED_NAMESPACE::vector<int>	construct_test_8(construct_test_6);
		print_vector(construct_test_8);		
	}

	
	{
		std::cout << BRED << "*******************************" << std::endl;
		std::cout << "<---------TEST STACK--------->" << std::endl;
		std::cout << "*******************************" << CRESET << std::endl;

		TESTED_NAMESPACE::stack<int> mystack;

		std::cout << BBLU << "1) PUSH" << CRESET << std::endl;

		print_stack(mystack);

		std::cout << "-------" << std::endl;

		for (int i = 0; i < 5; ++i)
			mystack.push(i);

		print_stack(mystack);

		std::cout << BBLU << "2) POP && TOP" << CRESET << std::endl;

		while (!mystack.empty())
		{
			std::cout << mystack.top() << std::endl;
			mystack.pop();
			print_stack(mystack);
			std::cout << "-------" << std::endl;
		}

		std::cout << BBLU << "3) COPY CONSTRUCTOR" << CRESET << std::endl;

		for (int i = 0; i < 5; ++i)
			mystack.push(i);

		TESTED_NAMESPACE::stack<int> o_stack(mystack);

		print_stack(o_stack);

		std::cout << BBLU << "4) RELATIONAL OPERATORS" << CRESET << std::endl;

		TESTED_NAMESPACE::stack<int> different_stack;
		TESTED_NAMESPACE::stack<int> empty_stack;
		TESTED_NAMESPACE::stack<int> empty_stack_2;

		for (int i = 20; i < 42; ++i)
			different_stack.push(i);

		std::cout << "test == comp_test: " << std::endl;
		std::cout << "MY TEST" << std::endl;
		if (mystack == o_stack)
			std::cout << "EQUAL : ==" << std::endl;
		else
			std::cout << "WRONG" << std::endl;
		if (mystack == different_stack)
			std::cout << "EQUAL : ==" << std::endl;
		else
			std::cout << "WRONG" << std::endl;
		if (empty_stack == empty_stack_2)
			std::cout << "EQUAL : ==" << std::endl;
		else
			std::cout << "WRONG" << std::endl;

		std::cout << "--------------------" << std::endl;

		std::cout << "test != comp_test: " << std::endl;
		std::cout << "MY TEST" << std::endl;
		if (mystack != different_stack)
			std::cout << "DIFFRENT : !=" << std::endl;
		else
			std::cout << "WRONG" << std::endl;

		std::cout << "--------------------" << std::endl;
		std::cout << "test < comp_test: " << std::endl;
		std::cout << "MY TEST" << std::endl;
		if (mystack < different_stack)
			std::cout << "LOWER : <" << std::endl;
		else
			std::cout << "WRONG" << std::endl;

		std::cout << "--------------------" << std::endl;
		std::cout << "test > comp_test: " << std::endl;
		std::cout << "MY TEST" << std::endl;
		if (mystack > different_stack)
			std::cout << "HIGHER : >" << std::endl;
		else
			std::cout << "WRONG" << std::endl;

		std::cout << "--------------------" << std::endl;
		std::cout << "test <= comp_test: " << std::endl;
		std::cout << "MY TEST" << std::endl;
		if (mystack <= different_stack)
			std::cout << "LOWER <=" << std::endl;
		else
			std::cout << "WRONG" << std::endl;

		std::cout << "--------------------" << std::endl;
		std::cout << "test >= comp_test: " << std::endl;
		std::cout << "MY TEST" << std::endl;
		if (mystack >= different_stack)
			std::cout << "HIGHER : >=" << std::endl;
		else
			std::cout << "WRONG" << std::endl;
	}


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

  		// return 0;

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



}