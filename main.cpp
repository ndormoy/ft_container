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
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <memory>
#include <cassert>
#include <limits>
#include <algorithm>


#define T_SIZE_TYPE typename TESTED_NAMESPACE::vector<T>::size_type
#define TESTED_TYPE int

template <typename T>
void	printSize(TESTED_NAMESPACE::vector<T> const &vct, bool print_content = true)
{
	const T_SIZE_TYPE size = vct.size();
	const T_SIZE_TYPE capacity = vct.capacity();
	const std::string isCapacityOk = (capacity >= size) ? "OK" : "KO";
	// Cannot limit capacity's max value because it's implementation dependent

	std::cout << "size: " << size << std::endl;
	std::cout << "capacity: " << isCapacityOk << std::endl;
	std::cout << "max_size: " << vct.max_size() << std::endl;
	if (print_content)
	{
		typename TESTED_NAMESPACE::vector<T>::const_iterator it = vct.begin();
		typename TESTED_NAMESPACE::vector<T>::const_iterator ite = vct.end();
		std::cout << std::endl << "Content is:" << std::endl;
		for (; it != ite; ++it)
			std::cout << "- " << *it << std::endl;
	}
	std::cout << "###############################################" << std::endl;
}


// using namespace TESTED_NAMESPACE;

void	is_empty(TESTED_NAMESPACE::vector<TESTED_TYPE> const &vct)
{
	std::cout << "is_empty: " << vct.empty() << std::endl;
}

int		main(void)
{
	const int start_size = 7;
	TESTED_NAMESPACE::vector<TESTED_TYPE> vct(start_size, 20);
	TESTED_NAMESPACE::vector<TESTED_TYPE> vct2;
	TESTED_NAMESPACE::vector<TESTED_TYPE>::iterator it = vct.begin();

	for (int i = 2; i < start_size; ++i)
		it[i] = (start_size - i) * 3;
	printSize(vct, true);

	vct.resize(10, 42);
	printSize(vct, true);

	vct.resize(18, 43);
	printSize(vct, true);
	vct.resize(10);
	printSize(vct, true);
	vct.resize(23, 44);
	printSize(vct, true);
	vct.resize(5);
	printSize(vct, true);
	vct.reserve(5);
	vct.reserve(3);
	printSize(vct, true);
	vct.resize(87);
	vct.resize(5);
	printSize(vct, true);

	// is_empty(vct2);
	// vct2 = vct;
	// is_empty(vct2);
	// vct.reserve(vct.capacity() + 1);
	// printSize(vct, true);
	// printSize(vct2, true);

	// vct2.resize(0);
	// is_empty(vct2);
	// printSize(vct2, true);
	return (0);
}
