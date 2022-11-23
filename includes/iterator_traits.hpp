/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:52 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/23 11:42:10 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TRAITS_HPP
#define ITERATOR_TRAITS_HPP

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
	struct input_iterator_tag {}; // is a LegacyIterator that can read from the pointed-to element
	struct output_iterator_tag {}; //is a LegacyIterator that can write to the pointed-to element.
    struct forward_iterator_tag : public input_iterator_tag {}; //is a LegacyIterator that can read data from the pointed-to element.
	struct bidirectional_iterator_tag : public forward_iterator_tag {}; //is a LegacyForwardIterator that can be moved in both directions (i.e. incremented and decremented).
	struct random_access_iterator_tag : public bidirectional_iterator_tag {}; //is a LegacyBidirectionalIterator that can be moved to point to any element in constant time.

	template<typename Category, typename Tp, typename Distance = ptrdiff_t, typename Pointer = Tp*, typename Reference = Tp&>
	struct iterator
	{
		typedef Category									iterator_category; // 	the category of the iterator, one of the iterator tags : input/output/forward/bidirectional/random_access -->_iterator_tag
		typedef Tp											iterator_type; //the type of the values that can be obtained by dereferencing the iterator. This type should be void for output iterators.
		typedef Distance									difference_type; //	a type that can be used to identify distance between iterators
		typedef Pointer										pointer; //defines a pointer to the type iterated over (T)
		typedef Reference									reference; //	defines a reference to the type iterated over (T)
	};

	template <class Iterator>
	class iterator_traits
	{
		public:
			typedef typename Iterator::difference_type		difference_type; //Type to express the result of subtracting one iterator from another
			typedef typename Iterator::value_type			value_type; //The type of the element the iterator can point to
			typedef typename Iterator::pointer				pointer; //The type of a pointer to an element the iterator can point to
			typedef typename Iterator::reference			reference; //	The type of a reference to an element the iterator can point to
			typedef typename Iterator::iterator_category	iterator_category; // input/output/forward/bidirectional/random_access -->_iterator_tag
	};
	//specialization for pointer
	template <class T>
	class iterator_traits<T*>
	{
		public:
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
		public:
			typedef ptrdiff_t								difference_type;
			typedef T										value_type;
			typedef const T*								pointer;
			typedef const T&								reference;
			typedef std::random_access_iterator_tag			iterator_category;
	};
}

#endif