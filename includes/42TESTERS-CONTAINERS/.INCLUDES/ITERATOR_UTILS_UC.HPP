/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_utils.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:55 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/23 11:42:19 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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