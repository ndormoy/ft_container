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

			// member types:
			typedef T										value_type; //The type of the elements.
			typedef Allocator								allocator_type;
			typedef std::size_t								size_type;
			typedef std::ptrdiff_t							difference_type;
			typedef typename Allocator::reference			reference;
			//ou typedef reference value_type&; // (sur cppreference)
			typedef typename Allocator::const_reference		const_reference;
			//ou typedef	typename const_reference value_type; // (sur cppreference) 
			typedef typename Allocator::pointer				pointer;
			typedef T										*iterator; // Pareil que d'heriter de std::random_access_iterator
			typedef const T									*const_iterator; // Pareil que d'heriter de std::random_access_iterator
			typedef typename Allocator::const_pointer		const_pointer;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

			// 23.2.4.1 construct/copy/destroy:
			explicit vector(const Allocator& = Allocator()); //default constructor
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

			// iterators:
			iterator begin(); //Returns an iterator pointing to the first element in the vector
			const_iterator begin() const; //Returns an const_iterator pointing to the first element in the vector
			iterator end(); //Returns an iterator pointing to the theoretical element that follows the last element in the vector
			const_iterator end() const; //Returns a const_iterator pointing to the theoretical element that follows the last element in the vector
			reverse_iterator rbegin(); //Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
			const_reverse_iterator rbegin() const; //Returns a reverse const_iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
			reverse_iterator rend(); //Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
			const_reverse_iterator rend() const; //Returns a const reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

			// 23.2.4.2 capacity:
			size_type size() const; // Returns the number of elements in the vector.
			size_type max_size() const; // Returns the maximum number of elements that the vector can hold.
			// void resize(size_type sz, T c = T());
			void	resize(size_type size, value_type val = value_type()); // Resizes the container so that it contains ‘size’ elements.
			size_type capacity() const; // Returns the size of the storage space currently allocated to the vector expressed as number of elements.
			bool empty() const; // Returns whether the container is empty.
			void reserve(size_type n); // Requests that the vector capacity be at least enough to contain n elements.

			// element access:
			reference operator[](size_type n);
			const_reference operator[](size_type n) const;
			const_reference at(size_type n) const;
			reference at(size_type n);
			reference front();
			const_reference front() const;
			reference back();
			const_reference back() const;

			// 23.2.4.3 modifiers:
			void push_back(const T& x);
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
            size_type		_m_size; //size of the vector
			size_type		_m_capacity; //a value at least as large as size
			pointer			_m_begin;//pointer to the first element of the vector
			pointer 		_m_end;//pointer to the last element of the vector
	
	};

	//ATTENTION : TO FILL
	//overload operator of vector<T,Allocator>
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