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

template <typename T>
void print_vector(TESTED_NAMESPACE::vector<T> myvector)
{
	for (typename TESTED_NAMESPACE::vector<T>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << *(it) << std::endl;
	std::cout << "size = " << myvector.size() << std::endl;
	std::cout << "capacity = " << myvector.capacity() << std::endl;

}

int main()
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

	std::cout << BBLU << "3) BEGIN" << CRESET << std::endl;

	std::cout << "begin = " << *(test_one.begin()) << std::endl;
	std::cout << "begin = " << *(test_two.begin()) << std::endl;
	std::cout << "begin = " << *(test_three.begin()) << std::endl;

	/************************************************************************************************/

	std::cout << BBLU << "4) END" << CRESET << std::endl;

	std::cout << "end = " << *(test_one.end()) << std::endl;
	TESTED_NAMESPACE::vector<int>::iterator it_one = test_one.end();
	it_one--;
	std::cout << "end = " << *it_one << std::endl;

	std::cout << "end = " << *(test_two.end()) << std::endl;
	TESTED_NAMESPACE::vector<int>::iterator it_two = test_two.end();
	it_two--;
	std::cout << "end = " << *it_one << std::endl;
	
	std::cout << "end = " << *(test_three.end()) << std::endl;
	TESTED_NAMESPACE::vector<int>::iterator it_three = test_three.end();
	it_three--;
	std::cout << "end = " << *it_one << std::endl;

	/************************************************************************************************/

	std::cout << BBLU << "5) CLEAR" << CRESET << std::endl;

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

	std::cout << BBLU << "6) EMPTY" << CRESET << std::endl;

	std::cout << "empty = " << test_one.empty() << std::endl;
	std::cout << "empty = " << test_two.empty() << std::endl;
	std::cout << "empty = " << test_three.empty() << std::endl;
	test_three.push_back(1);
	std::cout << "empty = " << test_three.empty() << std::endl;
	test_three.clear();

	/************************************************************************************************/

	std::cout << BBLU << "7) ERASE" << CRESET << std::endl;

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

	std::cout << BBLU << "8) FRONT" << CRESET << std::endl;

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

	std::cout << BBLU << "8) GET ALLOCATOR" << CRESET << std::endl;

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

	std::cout << BBLU << "9) INSERT" << CRESET << std::endl;

	std::cout << BGRN << "a) insert single element" << CRESET << std::endl;

	test_one.insert(test_one.begin(), 2);
	test_one.insert(test_one.begin(), 4);
	test_one.insert(test_one.begin(), 6);
	test_one.insert(test_one.end(), 8);
	print_vector(test_one);
	std::cout << "-------" << std::endl;
	TESTED_NAMESPACE::vector<int>::iterator okit = test_one.begin();
	okit++;
	test_one.insert(okit, 60);
	print_vector(test_one);
	std::cout << "-------" << std::endl;
	okit = test_one.begin();
	okit++;
	okit++;
	okit++;
	okit++;
	okit++;
	test_one.insert(okit, 80);
	print_vector(test_one);

	test_one.clear();

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

	test_one.insert(test_one.begin(), 2);
	test_one.insert(test_one.begin(), 4);
	test_one.insert(test_one.begin(), 6);
	test_one.insert(test_one.end(), 8);

	test_two.insert(test_two.begin(), test_one.begin(), test_one.end());

    print_vector(test_two);
	std::cout << "-------" << std::endl;
	test_two.insert(test_two.begin() + 2, test_one.begin(), test_one.end());
	print_vector(test_two);
	std::cout << "-------" << std::endl;
	test_two.insert(test_two.begin() + 4, test_one.begin(), test_one.begin() + 2);
	print_vector(test_two);

    std::cout << "-------" << std::endl;
	test_two.clear();

	std::cout << BGRN << "c) insert fill" << CRESET << std::endl;

	test_one.insert(test_one.begin() + 2, 5, 42);
	print_vector(test_one);
	std::cout << "-------" << std::endl;

	test_one.clear();
	test_one.insert(test_one.begin(), 5, 84);
	print_vector(test_one);

	try
	{
		test_one.insert(test_one.begin(), 1000000000000000000, 84);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	test_one.clear();
	
	/************************************************************************************************/

	std::cout << BBLU << "10) MAX SIZE" << CRESET << std::endl;

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

	std::cout << BBLU << "11) OPERATOR[]" << CRESET << std::endl;

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

	std::cout << BBLU << "12) OPERATOR=" << CRESET << std::endl;
	
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

	std::cout << BBLU << "13) POP BACK" << CRESET << std::endl;

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

	std::cout << BBLU << "14) PUSH BACK" << CRESET << std::endl;

	test_one.push_back(10);
	test_one.push_back(20);
	test_one.push_back(30);
	test_one.push_back(40);
	test_one.push_back(50);
	test_one.push_back(60);
	print_vector(test_one);

	/************************************************************************************************/

	std::cout << BBLU << "14) RBEGIN && REND" << CRESET << std::endl;

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
	
	/************************************************************************************************/

	std::cout << BBLU << "14) RBEGIN && REND" << CRESET << std::endl;
}