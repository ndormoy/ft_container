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
#include <stack>

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

int main()
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

	std::cout << BBLU << "3) RELATIONAL OPERATORS" << CRESET << std::endl;

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