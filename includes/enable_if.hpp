/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:39 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/23 11:41:54 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENABLE_IF_HPP
#define ENABLE_IF_HPP

namespace	ft
{
	template <bool B, class T = void>
	struct	enable_if
	{
	};

	template <class T>
	struct	enable_if<true, T>
	{
		typedef T	type;
	};
}

#endif