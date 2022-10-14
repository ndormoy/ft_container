#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace	ft
{
	template<typename Iterator>
	class	reverse_iterator : public iterator<
		typename iterator_traits<Iterator>::iterator_category,
		typename iterator_traits<Iterator>::value_type,
		typename iterator_traits<Iterator>::difference_type,
		typename iterator_traits<Iterator>::pointer,
		typename iterator_traits<Iterator>::reference>

	{
		protected:

			Iterator	_current;
			typedef	iterator_traits<Iterator>	traits_type;

		public:

			typedef	Iterator													iterator_type;
			typedef	typename ft::iterator_traits<Iterator>::difference_type		difference_type;
			// typedef	typename ft::iterator_traits<Iterator>::value_type			value_type;
			typedef	typename ft::iterator_traits<Iterator>::::pointer			pointer;
			typedef	typename ft::iterator_traits<Iterator>::::reference			reference;
			// typedef	typename ft::iterator_traits<Iterator>::iterator_category	iterator_category

			/*---------------------------------------------------------------------------------------------------
			*                                  Constructors
			---------------------------------------------------------------------------------------------------*/

			reverse_iterator() : _current() {} // construct with default container
			explicit reverse_iterator(iterator_type x) : _current(x) {} // construct with container it points to
			reverse_iterator(const reverse_iterator& x) : _current(x) {} // copy
			template<typename Iter_rev> // construct from a related type (reverse_iterator)
			reverse_iterator(const reverse_iterator<Iter_rev>& x) : _current(x.base()) {} // copy
			iterator_type base() const { return (_current); } // return base iterator

			/*---------------------------------------------------------------------------------------------------
			*                                  Overload operators
			---------------------------------------------------------------------------------------------------*/

			reference operator*() const
			{
				Iterator tmp = _current;
				return (*--tmp);
			}
			pointer operator->() const
			{
				Iterator tmp = _current;
				--tmp;
				return (tmp);
			}
			reverse_iterator& operator++()
			{
				--_current;
				return (*this);
			}
			reverse_iterator operator++(int)
			{
				reverse_iterator tmp = *this;
				--_current;
				return (tmp);
			}
			reverse_iterator operator--()
			{
				++_current;
				return (*this);
			}
			reverse_iterator operator--(int)
			{
				reverse_iterator tmp = *this;
				++_current;
				return (tmp);
			}
			reverse_iterator operator+(difference_type n) const
			{ return (reverse_iterator(_current - n)); }
			reverse_iterator& operator+=(difference_type n)
			{
				_current -= n;
				return (*this);
			}
			reverse_iterator operator-(difference_type n) const
			{ return (reverse_iterator(_current + n)); }
			reverse_iterator& operator-=(difference_type n)
			{
				_current += n;
				return (*this);
			}
			reference operator[](difference_type n) const
			{ return (*(*this + n)); }
	};
}

#endif