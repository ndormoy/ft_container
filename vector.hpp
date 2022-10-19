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
			explicit vector(const allocator_type& my_alloc = allocator_type()) :
				_m_allocator(my_alloc), _m_size(0), _m_capacity(0), _m_begin(NULL), _m_end(NULL)
			{
			}
			explicit vector(size_type n, const T& value = T(), const Allocator& = Allocator()); //fill constructor
			template <class InputIterator>
			vector(InputIterator first, InputIterator last, const Allocator& = Allocator()); //range constructor
			vector(const vector<T,Allocator>& x); //copy constructor
			//destructor
			~vector()
			{
				
			} 
			//copy assignment operator
			vector<T,Allocator>& operator=(const vector<T,Allocator>& x)
			{
				(void)x;
			}
			template <class InputIterator>
			void assign(InputIterator first, InputIterator last); //range assign
			void assign(size_type n, const T& u); //fill assign
			//get allocator
			allocator_type get_allocator() const
			{
				return (_m_allocator);
			}

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
			capacity:
			*/

			// Returns the number of elements in the vector.
			size_type size() const
			{
				return	(_m_size);
			}
			// Returns the maximum number of elements that the vector can hold.
			size_type max_size() const
			{
				return (allocator_type::max_size());
			}
			// void resize(size_type sz, T c = T());
			// Resizes the container so that it contains ‘size’ elements.
			void	resize(size_type size, value_type val = value_type())
			{
				if (size > _m_size)
				{
					//If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
					//If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
					if (size > _m_capacity)
						reserve(size);
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
				if (n > _m_capacity)
				{
					pointer tmp = _m_allocator.allocate(n);
					for (size_type i = 0; i < _m_size; i++)
						_m_allocator.construct(tmp + i, _m_begin[i]);
					_m_allocator.deallocate(_m_begin, _m_capacity);
					_m_begin = tmp;
					_m_capacity = n;
				}
			}

			/*
			element access:
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
			modifiers:
			*/

			void push_back(const value_type& x)
			{
				if (_m_size >= _m_capacity)
				{
					if (_m_capacity == 0)
						reserve(1);
					else
					{
						reserve(_m_capacity * 2 );
						_m_allocator.construct(_m_begin + _m_size, x);
					}
				}
				_m_size++;
			}
			// Removes the last element in the vector, effectively reducing the container size by one. This destroys the removed element.
			void pop_back()
			{
				_m_size--;
				_m_allocator.destroy(_m_begin + _m_size);
			}
			//The vector is extended by inserting new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
			/* iterator insert(iterator position, const T& x)
			{
				// iterator it = begin();
				// size_type i = 0;
				// while (it != position)
				// {
				// 	it++;
				// 	i++;
				// }
				// if (_m_size >= _m_capacity)
				// {
				// 	if (_m_capacity == 0)
				// 		reserve(1);
				// 	else
				// 		reserve(_m_capacity * 2);
				// }
				// for (size_type j = _m_size; j > i; j--)
				// 	_m_begin[j] = _m_begin[j - 1];
				// _m_begin[i] = x;
				// _m_size++;
				// return (position);

				iterator	it = begin();
				size_type	i = 0;
				while (it != position)
				{
					it++;
					i++;
				}
				if (_m_size >= _m_capacity)
				{
					if (_m_capacity == 0)
						reserve(1);
					else
						reserve(_m_capacity * 2);
				}
			} */
			void insert(iterator position, size_type n, const T& x);
			template <class InputIterator>
			void insert(iterator position,
			InputIterator first, InputIterator last);
			iterator erase(iterator position);
			iterator erase(iterator first, iterator last);
			// Exchanges the content of the container by the content of x, which is another vector object of the same type. Sizes may differ.
			void swap(vector<T, Allocator>& x)
			{
				//TODO verifer si il ne faut pas swap les allocators
				pointer tmp_begin = _m_begin;
				size_type tmp_size = _m_size;
				size_type tmp_capacity = _m_capacity;
				_m_begin = x._m_begin;
				_m_size = x._m_size;
				_m_capacity = x._m_capacity;
				x._m_begin = tmp_begin;
				x._m_size = tmp_size;
				x._m_capacity = tmp_capacity;
			}
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

	// template <class T, class Allocator>
	// bool operator==(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	// {	
	// }

	// template <class T, class Allocator>
	// bool operator!=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	// {
	// }

	// template <class T, class Allocator>
	// bool operator<(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	// {
	// }

	// template <class T, class Allocator>
	// bool operator<=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	// {
	// }

	// template <class T, class Allocator>
	// bool operator>(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	// {
    // }

	// template <class T, class Allocator>
	// bool operator>=(const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
	// {
    // }

};

#endif