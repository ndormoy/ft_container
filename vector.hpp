#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>

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
			typedef typename Allocator::reference reference;
			typedef typename Allocator::const_reference const_reference;
			typedef implementation defined iterator;
			typedef implementation defined const_iterator;
			typedef implementation defined size_type;
			typedef implementation defined difference_type
			typedef T value_type; //The type of the elements.
			typedef Allocator allocator_type;
			typedef typename Allocator::pointer pointer;
			typedef typename Allocator::const_pointer const_pointer
			typedef std::reverse_iterator<iterator> reverse_iterator;
			typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

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
			iterator begin(); //return iterator to beginning
			const_iterator begin() const; //return const_iterator to beginning
			iterator end(); //return iterator to end
			const_iterator end() const; //return const_iterator to end
			reverse_iterator rbegin(); //return reverse iterator to reverse beginning
			const_reverse_iterator rbegin() const; //return const reverse iterator to reverse beginning
			reverse_iterator rend(); //return reverse iterator to reverse end
			const_reverse_iterator rend() const; //return const reverse iterator to reverse end

			// 23.2.4.2 capacity:
			size_type size() const;
			size_type max_size() const;
			void resize(size_type sz, T c = T());
			size_type capacity() const;
			bool empty() const;
			void reserve(size_type n);

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
	};

}
#endif