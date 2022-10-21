#ifndef TOOLS_HPP
#define TOOLS_HPP

#include "iterator_traits.hpp"

namespace ft
{
	template <class InputIterator>
	typename iterator_traits<InputIterator>::difference_type distance(InputIterator first, InputIterator last)
	{
		typename iterator_traits<InputIterator>::difference_type dist = 0;
		while (first != last)
		{
			first++;
			dist++;
		}
		return (dist);
	}

};

#endif