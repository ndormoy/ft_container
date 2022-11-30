/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:06:16 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/30 18:10:35 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"
// #include <stack>

namespace	ft
{
	template <class T, class Container = ft::vector<T> >
	class stack
	{
		public:

			typedef	typename	Container::value_type		value_type;
			typedef	typename	Container::reference		reference;
			typedef	typename	Container::const_reference	const_reference;
			typedef	typename	Container::size_type		size_type;
			typedef				Container					container_type;

		protected:

			// See queue::c for notes on this name.
			Container c;

		public:

			stack() : c() {}; // default constructor
			explicit			stack(const Container& ctnr) : c(ctnr) {}; // copy constructor
			bool				empty() const { return c.empty(); }; // returns whether the stack is empty
			size_type			size() const { return c.size(); }; // returns the number of elements
			value_type&			top() { return c.back(); }; // returns a reference to the top element in the stack
			const value_type&	top() const { return c.back(); }; // returns a reference to the top element in the stack
			void				push(const value_type& val) { c.push_back(val); }; // adds a new element on top of the stack, above its current top element
			void				pop() { c.pop_back(); }; // removes the element on top of the stack, effectively reducing its size by one

			// We change to T1 instead of T because of the shadow template  
			template <class T1, class Container1>
			friend bool operator== (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);

			template <class T1, class Container1>
			friend bool operator< (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);

	};
	
	/*
	----------------------------------------------------------------------------------------------------------------------
										RELATIONAL NON MEMBER OPERATORS
	----------------------------------------------------------------------------------------------------------------------
	*/

	template <class T, class Container>
	bool operator==(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c == rhs.c);
	}

	template <class T, class Container>
	bool operator!=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (!(lhs == rhs));
	}


	template <class T, class Container>
	bool operator<(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c < rhs.c);
	}

	template <class T, class Container>
	bool operator<=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return ((lhs < rhs) || (lhs == rhs));
	}

	template <class T, class Container>
	bool operator>(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return ((rhs < lhs));
	}

	template <class T, class Container>
	bool operator>=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return ((rhs < lhs) || (lhs == rhs));
	}

};


#endif