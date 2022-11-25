/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:20 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/25 14:23:50 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
#include <iostream>
#include "enable_if.hpp"
#include "equal.hpp"
#include "is_integral.hpp"
#include "iterator_traits.hpp"
#include "iterator_utils.hpp"
#include "pair.hpp"
#include "reverse_iterator.hpp"
#include "reverse_iterator.hpp"
#include "vector_utils.hpp"

namespace	ft
{
	/*
	The std::allocator class template is the default Allocator used by
	all standard library containers if no user-specified allocator is provided.
	*/

	/* 
	std::vector is a sequence container that encapsulates dynamic size arrays.
	*/
	template <class T, class Allocator = std::allocator<T> >
	class vector {
		public:

			/*
			member types:
			*/
			typedef T										value_type; // The type of the elements.
			typedef Allocator								allocator_type;
			typedef std::size_t								size_type; // Quantities of elements
			typedef std::ptrdiff_t							difference_type; // Difference between two pointers
			typedef typename Allocator::reference			reference;// Reference to element
			typedef typename Allocator::const_reference		const_reference;
			typedef typename Allocator::pointer				pointer;
			typedef T										*iterator; // Pareil que d'heriter de std::random_access_iterator
			typedef const T									*const_iterator; // Pareil que d'heriter de std::random_access_iterator
			typedef typename Allocator::const_pointer		const_pointer;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

			/*
			------------------------------------------------------------------------------------------------------------------------------
			                                     construct/copy/destroy:
			------------------------------------------------------------------------------------------------------------------------------
			*/

			//default constructor : Constructs an empty container, with no elements.
			explicit vector(const allocator_type& my_alloc = allocator_type()) :
				_m_allocator(my_alloc), _m_size(0), _m_capacity(0), _m_begin(NULL)
			{
			}
			//fill constructor : Constructs a container with n elements. Each element is a copy of val.
			explicit vector(size_type n, const T& value = T(), const Allocator& my_alloc = Allocator()) :
				_m_allocator(my_alloc), _m_size(n), _m_capacity(n), _m_begin(NULL)
			{
				_m_begin = _m_allocator.allocate(_m_capacity);
				for (size_type i = 0; i < n; i++)
					_m_allocator.construct(_m_begin + i, value);
			}
			//range constructor : Constructs a container with as many elements as the range [first,last), with each element constructed from
			//its corresponding element in that range, in the same order.
			// vector(InputIterator first, InputIterator last, const Allocator& = Allocator()) :
			template <class InputIterator>
			vector(typename ft::enable_if<!(ft::is_integral<InputIterator>::value), InputIterator>::type first, InputIterator last, const Allocator& my_alloc = Allocator())
			{
				difference_type	nb = ft::distance(first, last);
				_m_allocator = my_alloc;
				_m_size = nb;
				_m_capacity = nb;
				_m_begin = _m_allocator.allocate(_m_capacity);

				reserve(nb);
				_m_size = nb;
				for (difference_type i = 0; i < nb; i++)
				{
					_m_allocator.construct(_m_begin + i, *first);
					first++;
				}
				_m_size = nb;
			}
			//copy constructor : Constructs a container with a copy of each of the elements in x, in the same order.
			vector(const vector<T,Allocator>& x)
			{
				_m_allocator = x._m_allocator;
				_m_size = x._m_size;
				_m_capacity = x._m_size;
				_m_begin = _m_allocator.allocate(_m_capacity);

				for (size_type i = 0; i < _m_size; i++)
					_m_allocator.construct(_m_begin + i, x._m_begin[i]);
				// *this = x;
			}
			//destructor : This destroys all container elements, and deallocates all the storage capacity allocated by the vector using its allocator.
			~vector()
			{
				this->clear();
				if (_m_begin != NULL && _m_capacity != 0)
					_m_allocator.deallocate(_m_begin, _m_capacity);
			} 
			//copy assignment operator
			vector<T,Allocator>& operator=(const vector<T,Allocator>& x)
			{
				if (this != &x)
				{
					this->clear();
					assign(x.begin(), x.end());
				}
				return (*this);
			}
			//range assign : Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
			template <class InputIterator>
			void assign(typename ft::enable_if<!(ft::is_integral<InputIterator>::value), InputIterator>::type first, InputIterator last)
			{
				difference_type	nb = ft::distance(first, last);
				this->clear();
				reserve(nb);
				// this->clear();
				_m_size = nb;
				for (difference_type i = 0; i < nb; i++)
				{
					_m_allocator.construct(_m_begin + i, *first);
					first++;
				}
				_m_size = nb;
			}
			//fill assign : In the fill version (2), the new contents are n elements, each initialized to a copy of val.
			void assign(size_type n, const value_type& u)
			{
				this->clear();
				reserve(n);
				for (size_type i = 0; i < n; i++)
					_m_allocator.construct(_m_begin + i, u);
				_m_size = n;
			}
			//get allocator
			allocator_type get_allocator() const
			{
				return (_m_allocator);
			}

			/*
			------------------------------------------------------------------------------------------------------------------------------
			                                     iterators:
			------------------------------------------------------------------------------------------------------------------------------
			*/

			//Returns an iterator pointing to the first element in the vector
			iterator begin()
			{
				return (_m_begin);
			}
			//Returns an const_iterator pointing to the first element in the vector
			const_iterator begin() const
			{
				return (_m_begin);
			}
			//Returns an iterator pointing to the theoretical element that follows the last element in the vector
			iterator end()
			{
				return (_m_begin + _m_size);
			}
			//Returns a const_iterator pointing to the theoretical element that follows the last element in the vector
			const_iterator end() const
			{
				return (_m_begin + _m_size);
			}
			//Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
			reverse_iterator rbegin()
			{
				return (reverse_iterator(end()));
			}
			//Returns a reverse const_iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
			const_reverse_iterator rbegin() const
			{
				return (const_reverse_iterator(end()));
			}
			//Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
			reverse_iterator rend()
			{
				return (reverse_iterator(begin()));
			}
			//Returns a const reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
			const_reverse_iterator rend() const
			{
				return (const_reverse_iterator(begin()));
			}

			/*
			------------------------------------------------------------------------------------------------------------------------------
			                                     capacity:
			------------------------------------------------------------------------------------------------------------------------------
			*/

			// Returns the number of elements in the vector.
			size_type size() const
			{
				return	(_m_size);
			}
			// Returns the maximum number of elements that the vector can hold.
			size_type max_size() const
			{
				return (_m_allocator.max_size());
			}
			// Resizes the container so that it contains ‘size’ elements.
			void	resize(size_type size, value_type val = value_type())
			{
				if (size >= _m_size)
				{
					//If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
					//If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
					if (size > 2 * _m_size)
						reserve(size);
					else
						reserve(2 * _m_size);
					for (size_type i = _m_size; i < size; i++)
						_m_allocator.construct(_m_begin + i, val);
				}
				else if (size < _m_size)
				{
					//If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
					for (size_type i = size; i < _m_size; i++)
						_m_allocator.destroy(_m_begin + i);
				}
				_m_size = size;
			}
			// Returns the size of the storage space currently allocated to the vector expressed as number of elements.
			size_type capacity() const
			{
				return (_m_capacity);
			}
			// Returns whether the container is empty.
			bool empty() const
			{
				if (_m_size == 0)
					return (true);
				else
					return (false);
			}
			// Requests that the vector capacity be at least enough to contain n elements.
			// construct : first arg = pointer to allocated uninitialized storage, second arg = the value to use as the copy constructor argument
			void reserve(size_type n)
			{
				//TODO throw exception if n > max_size()
				if (n > _m_allocator.max_size())
					throw std::length_error("vector::reserve");
				if (n > _m_capacity)
				{
					pointer tmp = _m_allocator.allocate(n);
					for (size_type i = 0; i < _m_size; i++)
						_m_allocator.construct(tmp + i, _m_begin[i]);
					for (size_type i = 0; i < _m_size; i++)
						_m_allocator.destroy(_m_begin + i);
					_m_allocator.deallocate(_m_begin, _m_capacity);
					_m_begin = tmp;
					_m_capacity = n;
				}
			}

			/*
			------------------------------------------------------------------------------------------------------------------------------
			                                     element access:
			------------------------------------------------------------------------------------------------------------------------------
			*/

			// returns a reference to the element at position n in the vector container.
			reference operator[](size_type n)
			{
				return (_m_begin[n]);
			}
			// returns a const reference to the element at position n in the vector container.
			const_reference operator[](size_type n) const
			{
				return (_m_begin[n]);
			}
			// Returns a reference to the element at position n in the vector.
			const_reference at(size_type n) const
			{
				if (n >= _m_size)
					throw std::out_of_range("Out of range");
				return (_m_begin[n]);
			}
			reference at(size_type n)
			{
				//TODO ajouter le bon message d'erreur
				if (n >= _m_size)
					throw std::out_of_range("Out of range");
				return (_m_begin[n]);
			}
			reference front()
			{
				return (*_m_begin);
			}
			const_reference front() const
			{
				return (*_m_begin);
			}
			reference back()
			{
				return (*(_m_begin + _m_size - 1));
			}
			const_reference back() const
			{
				return (*(_m_begin + _m_size - 1));
			}

			/*
			------------------------------------------------------------------------------------------------------------------------------
			                                     modifiers:
			------------------------------------------------------------------------------------------------------------------------------
			*/

			void push_back(const value_type& x)
			{
				if (_m_size >= _m_capacity)
				{
					if (_m_capacity == 0)
						reserve(1);
					else
						reserve(_m_capacity * 2 );
				}
				_m_allocator.construct(_m_begin + _m_size++, x);
			}
			// Removes the last element in the vector, effectively reducing the container size by one. This destroys the removed element.
			void pop_back()
			{
				_m_size--;
				_m_allocator.destroy(_m_begin + _m_size);
			}
			// The vector is extended by inserting new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
			// single element inserts
			iterator insert(iterator position, const T& x)
			{
				iterator	it = begin();
				size_type	i = 0;
				while (it++ != position)
					i++;
				if (_m_size >= _m_capacity)
				{
					if (_m_capacity == 0)
						reserve(1);
					else
						reserve(_m_size * 2);
				}
				for (size_type pos = _m_size; pos > i; pos--)
				{
					_m_allocator.construct(_m_begin + (pos), *(_m_begin + pos - 1));
					_m_allocator.destroy(_m_begin + (pos - 1));
				}
				_m_allocator.construct(_m_begin + i, x);
				_m_size++;
				return(_m_begin + i);
			}
			//make function vector fill insert

			// fill insert
			void insert(iterator position, size_type n, const T& x)
			{
				iterator	it = begin();
				size_type	i = 0;
				if (n == 0)
					return ;
				while (it++ != position)
					i++;
				if (_m_size + n >= _m_capacity)
				{
					if (_m_size + n > 2 * _m_capacity)
						reserve(_m_size + n);
					else
						reserve(2 * _m_size);
				}
				for (size_type pos = _m_size; pos > i; pos--)
				{
					_m_allocator.construct(_m_begin + (pos + n - 1), *(_m_begin + pos - 1));
					_m_allocator.destroy(_m_begin + (pos - 1));
				}
				for (size_type pos = i; pos < i + n; pos++)
					_m_allocator.construct(_m_begin + pos, x);
				_m_size += n;
			}
			// range insert
			template <class InputIterator>
			void insert(iterator position,
			InputIterator first, typename ft::enable_if<!(ft::is_integral<InputIterator>::value), InputIterator>::type last)
			{
				difference_type i = 0;
				size_type	n = ft::distance(first, last);
				difference_type new_beg = position - begin();
				if (_m_size + n >= _m_capacity)
				{
					if (_m_capacity * 2 > n + _m_size)
						reserve(_m_size * 2);
					else
						reserve(_m_size + n);
				}
				while (last != first)
					insert(begin() + new_beg + i++, *first++);
			}
			
			//Removes from the vector either a single element (position) or a range of elements ([first,last)).
			iterator erase(iterator position)
			{
				if (position == end())
					return end();
				_m_allocator.destroy(position);
				for (iterator it = position; it < end() - 1; it++)
				{
					_m_allocator.construct(it, *(it + 1));
					_m_allocator.destroy(it + 1);
				}
				_m_size--;
                return (position);
			}
			iterator erase(iterator first, iterator last)
			{
				//TODO BELEC PTRDIFF
				ptrdiff_t	n = last - first;
				for (iterator it = first; it < last; it++)
					_m_allocator.destroy(it);
				for (iterator it = first; it < end() - n; it++)
				{
					_m_allocator.construct(it, *(it + n));
					_m_allocator.destroy(it + n);
				}
				_m_size -= n;
                return (first);
			}
			// Exchanges the content of the container by the content of x, which is another vector object of the same type. Sizes may differ.
			void swap(vector<T, Allocator>& x)
			{
				//TODO verifer si il ne faut pas swap les allocators
				pointer tmp_begin = _m_begin;
				size_type tmp_size = _m_size;
				size_type tmp_capacity = _m_capacity;
				allocator_type tmp_allocator = _m_allocator;
				_m_begin = x._m_begin;
				_m_size = x._m_size;
				_m_capacity = x._m_capacity;
				_m_allocator = x._m_allocator;
				x._m_begin = tmp_begin;
				x._m_size = tmp_size;
				x._m_capacity = tmp_capacity;
				x._m_allocator = tmp_allocator;
			}
			//Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
			void clear()
			{
				for (iterator it = begin(); it < end(); it++)
					_m_allocator.destroy(it);
				_m_size = 0;
			}

		private:

			allocator_type	_m_allocator;//
            size_type		_m_size; // current number of stored elements
			size_type		_m_capacity; //a value at least as large as size. Currently allocated storage space
			pointer			_m_begin;//pointer to the first element of the vector
	
	};

	//ATTENTION : TO FILL
	/*
	------------------------------------------------------------------------------------------------------------------------------
	                                     NON MEMBER RElATIONAL OVERLOADS OPERATORS
	------------------------------------------------------------------------------------------------------------------------------
	*/


	template <class T, class Allocator>
	bool operator==(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
		if (lhs.size() == rhs.size() && ft::equal(lhs.begin(), lhs.end(), rhs.begin()) == true)
			return (true);
		return (false);
	}

	template <class T, class Allocator>
	bool operator!=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
		if (lhs.size() != rhs.size() || !ft::equal(lhs.begin(), lhs.end(), rhs.begin()))
			return (true);
		return (false);
	}

	template <class T, class Allocator>
	bool operator<(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}

	template <class T, class Allocator>
	bool operator<=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()) || lhs == rhs);
	}

	template <class T, class Allocator>
	bool operator>(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
		return (ft::lexicographical_compare(rhs.begin(), rhs.end(), lhs.begin(), lhs.end()));
    }

	template <class T, class Allocator>
	bool operator>=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
		return (ft::lexicographical_compare(rhs.begin(), rhs.end(), lhs.begin(), lhs.end()) || lhs == rhs);
    }

	/*
	------------------------------------------------------------------------------------------------------------------------------
	                                     NON MEMBER FUNCTIONS
	------------------------------------------------------------------------------------------------------------------------------
	*/

	// on appelle la fonction swap de la classe vector (On peut car elle est en public)
	template <class T, class Allocator>
	void swap (ft::vector<T,Allocator>& x, ft::vector<T,Allocator>& y)
	{
		x.swap(y);
	}

};

#endif