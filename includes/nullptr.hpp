/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nullptr.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:06:01 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/23 11:42:45 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NULLPTR_HPP
#define NULLPTR_HPP

class nullptr_t
{
	public:

		template<class T>
		operator T*() const
		{
			return (0);
		}

		template<class C, class T>
		operator T C::*() const
		{
			return (0);
		}

	private:

		void operator&() const;

};

const nullptr_t my_nullptr = {};

bool operator==(const nullptr_t&, const nullptr_t&)
{
	return (true);
}

bool operator!=(const nullptr_t&, const nullptr_t&)
{
	return (false);
}

#endif