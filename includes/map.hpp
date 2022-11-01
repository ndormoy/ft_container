#ifndef MAP_HPP
#define MAP_HPP

#include <functional> 
#include <algorithm> 
#include <memory.h>
#include <iostream>
#include <string>
#include "red_black_tree.hpp"
#include "pair.hpp"


namespace	ft
{

	template < class Key, // map::key_type
		class T, // map::mapped_type
		class Compare = std::less<Key>, // map::key_compare
		class Alloc = std::allocator<ft::pair<const Key,T> > // map::allocator_type
	>
	class	map
	{
		public:

			typedef Key															key_type;
			typedef T															mapped_type;
			typedef ft::pair<const key_type, mapped_type>						value_type;
			typedef Compare														key_compare;
			typedef Alloc														allocator_type;
			typedef typename allocator_type::reference							reference;
			typedef typename allocator_type::const_reference					const_reference;
			typedef typename allocator_type::pointer							pointer;
			typedef typename allocator_type::const_pointer						const_pointer;
			typedef Rb_tree<key_type, value_type, key_compare, allocator_type>	tree_type;
			typedef tree_type::iterator											iterator;
			typedef tree_type::const_iterator									const_iterator;
			typedef typename tree_type::difference_type							difference_type;
			typedef typename tree_type::size_type								size_type;
			typedef tree_type::reverse_iterator									reverse_iterator;
			typedef tree_type::const_reverse_iterator							const_reverse_iterator;

			// empty container constructor (default constructor) --> construct an empty container with no elements.
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			// range constructor --> Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range.
			template <class InputIterator>
			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			// copy constructor --> Constructs a container with a copy of each of the elements in x.
			map (const map& x);
			// destructor --> This destroys all container elements, and deallocates all the storage capacity allocated by the map container using its allocator.
			~map();

		private:

		public:

			iterator	begin();
			


	};

	template <class Key, class T, class Compare, class Alloc>
	bool operator== (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs);

	template <class Key, class T, class Compare, class Alloc>
	bool operator!= (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs);

	template <class Key, class T, class Compare, class Alloc>
	bool operator<  (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs);

	template <class Key, class T, class Compare, class Alloc>
	bool operator<= (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs);

	template <class Key, class T, class Compare, class Alloc>
	bool operator>  (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs);

	template <class Key, class T, class Compare, class Alloc>
	bool operator>= (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs);


};

#endif