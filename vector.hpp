#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
#include <iostream>
#include "reverse_iterator.hpp"

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
			construct/copy/destroy:
			*/

			//default constructor
			explicit vector(const Allocator& = Allocator()) :
				_m_allocator(Allocator()), _m_size(0), _m_capacity(0), _m_begin(NULL), _m_end(NULL) {}
			{
			}
			explicit vector(size_type n, const T& value = T(), const Allocator& = Allocator()); //fill constructor
			template <class InputIterator>
			vector(InputIterator first, InputIterator last, const Allocator& = Allocator()); //range constructor
			vector(const vector<T,Allocator>& x); //copy constructor
			~vector(); //destructor
			vector<T,Allocator>& operator=(const vector<T,Allocator>& x); //copy assignment operator
			template <class InputIterator>
			void assign(InputIterator first, InputIterator last); //range assign
			void assign(size_type n, const T& u); //fill assign
			allocator_type get_allocator() const; //get allocator

			/*
			iterators:
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
			iterator end();
			{
				return (_m_begin + _m_size);
			}
			//Returns a const_iterator pointing to the theoretical element that follows the last element in the vector
			const_iterator end() const;
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
			capacity:
			*/

			// Returns the number of elements in the vector.
			size_type size() const
			{
				return	(_m_size);
			}
			// Returns the maximum number of elements that the vector can hold.
			size_type max_size() const;
			{
				return (allocator_type::max_size());
			}
			// void resize(size_type sz, T c = T());
			void	resize(size_type size, value_type val = value_type()); // Resizes the container so that it contains ‘size’ elements.
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
			void reserve(size_type n); // Requests that the vector capacity be at least enough to contain n elements.

			/*
			element access:
			*/

			reference operator[](size_type n); // returns a reference to the element at position n in the vector container.
			const_reference operator[](size_type n) const; // returns a const reference to the element at position n in the vector container.
			const_reference at(size_type n) const;
			reference at(size_type n);
			reference front();
			const_reference front() const;
			reference back();
			const_reference back() const;

			/*
			modifiers:
			*/

			void push_back(const value_type& x)
			{
				if (_m_size < _m_capacity )
				{
					reserve( 2 * theCapacity + 1 );
					_m_begin[ _m_size++ ] = x;
				}
			}
			void pop_back();
			iterator insert(iterator position, const T& x);
			void insert(iterator position, size_type n, const T& x);
			template <class InputIterator>
			void insert(iterator position,
			InputIterator first, InputIterator last);
			iterator erase(iterator position);
			iterator erase(iterator first, iterator last);
			void swap(vector<T,Allocator>&);
			void clear();

		private:

			allocator_type	_m_allocator;//
            size_type		_m_size; // current number of stored elements
			size_type		_m_capacity; //a value at least as large as size. Currently allocated storage space
			pointer			_m_begin;//pointer to the first element of the vector
			pointer 		_m_end;//pointer to the last element of the vector
	
	};

	//ATTENTION : TO FILL
	/*
	overload operator of vector<T,Allocator>
	*/

	template <class T, class Allocator>
	bool operator==(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{	
	}

	template <class T, class Allocator>
	bool operator!=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
	}

	template <class T, class Allocator>
	bool operator<(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
	}

	template <class T, class Allocator>
	bool operator<=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
	}

	template <class T, class Allocator>
	bool operator>(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
    }

	template <class T, class Allocator>
	bool operator>=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	{
    }

}
#endif