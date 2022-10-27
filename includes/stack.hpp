#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"
#include <stack>
#include <queue>

std::stack<int>		ft_stack;
std::queue<int>		ft_queue;
std::deque<int>		ft_deque;
std::_Deque_base<int, std::allocator<int> >	ft_deque_base;

namespace	ft
{
	template <class T, class Container = vector<T> >
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

			// stack() : c() {};
			explicit			stack(const Container& ctnr) : c(ctnr) {};
			bool				empty() const { return c.empty(); };
			size_type			size() const { return c.size(); };
			value_type&			top() { return c.back(); };
			const value_type&	top() const { return c.back(); };
			void				push(const value_type& val) { c.push_back(val); };
			void				pop() { c.pop_back(); };


	};

	template <class T, class Container>
	bool operator==(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c == rhs.c);
	}

	template <class T, class Container>
	bool operator!=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c != rhs.c);
	}

	template <class T, class Container>
	bool operator<(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c < rhs.c);
	}

	template <class T, class Container>
	bool operator<=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c <= rhs.c);
	}

	template <class T, class Container>
	bool operator>(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c > rhs.c);
	}

	template <class T, class Container>
	bool operator>=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c >= rhs.c);
	}

};


#endif