#ifndef ITERATOR_TRAITS_HPP
#define ITERATOR_TRAITS_HPP

#include <iostream>
#include <cstddef>

/*

std::iterator_traits is the type trait class that provides uniform interface to
the properties of LegacyIterator types.
This makes it possible to implement algorithms only in terms of iterators.

( LegacyIterator is the base set of requirements used by other iterator types:
LegacyInputIterator, LegacyOutputIterator, LegacyForwardIterator,
LegacyBidirectionalIterator, and LegacyRandomAccessIterator.
Iterators can be thought of as an abstraction of pointers. )

The template can be specialized for user-defined iterators
so that the information about the iterator can be retrieved even
if the type does not provide the usual typedefs.

*/

namespace	ft
{
	struct input_iterator_tag {};
	struct output_iterator_tag {};
    struct forward_iterator_tag : public input_iterator_tag {};
	struct bidirectional_iterator_tag : public forward_iterator_tag {};
	struct random_access_iterator_tag : public bidirectional_iterator_tag {};

	template <typename Category, typename Tp, typename Distance, typename Pointer, typename Reference>
	struct iterator
	{
		typedef Category iterator_category;
		typedef Tp iterator_type;
		typedef Distance difference_type;
		typedef Pointer pointer;
		typedef Reference reference;
	};

	template <class Iterator>
	class iterator_traits
	{
		typedef typename Iterator::difference_type		difference_type;
		typedef typename Iterator::value_type			value_type;
		typedef typename Iterator::pointer				pointer;
		typedef typename Iterator::reference			reference;
		typedef typename Iterator::iterator_category	iterator_category;
	};
	//specialization for pointer
	template <class T>
	class iterator_traits<T*>
	{
		typedef ptrdiff_t								difference_type;
		typedef T										value_type;
		typedef T*										pointer;
		typedef T&										reference;
		typedef std::random_access_iterator_tag			iterator_category;
	};
	//specialization for const pointer
	template <class T>
	class iterator_traits<const T*>
	{
		typedef ptrdiff_t								difference_type;
		typedef T										value_type;
		typedef const T*								pointer;
		typedef const T&								reference;
		typedef std::random_access_iterator_tag			iterator_category;
	};
}

#endif