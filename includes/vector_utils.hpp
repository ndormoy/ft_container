/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:06:20 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/18 10:53:54 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_UTILS_HPP
#define VECTOR_UTILS_HPP

#include "vector.hpp"

/*
Comparing sequentially the elements that have the same position in both ranges against each other until one element is not equivalent to the other.
The result of comparing these first non-matching elements is the result of the lexicographical comparison.
The elements are compared using operator < f.
This function is generally used to compare vectors of the same type.
*/

namespace ft
{
	template <class InputIterator1, class InputIterator2>
	bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, InputIterator2 last2)
	{
		while (first1 != last1)
		{
			if (first2 == last2 || *first2 < *first1) 
				return false;
			else if (*first1 < *first2) 
				return true;
			++first1; ++first2;
		}
		return (first2 != last2);
	}
};

#endif