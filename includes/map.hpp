#ifndef MAP_HPP
#define MAP_HPP

#include <functional> 
#include <algorithm> 
#include <memory.h>
#include <iostream>
#include <string>
#include "red_black_tree.hpp"
#include "pair.hpp"
// #include "nullptr.hpp"

#include <map>

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

			typedef Key											key_type; // the key of the map
			typedef T											mapped_type; // The type of the mapped value
			typedef ft::pair<const key_type, mapped_type>		value_type; // The type of the value
			typedef Compare										key_compare; // The type of the comparison function
			typedef Alloc										allocator_type; // The type of the allocator
			typedef typename allocator_type::reference			reference; // The type of the reference
			typedef typename allocator_type::const_reference	const_reference; // The type of the const reference
			typedef typename allocator_type::pointer			pointer;
			typedef typename allocator_type::const_pointer		const_pointer;
			typedef RedBlackTree<value_type, Compare, Alloc>	tree_type;
			typedef typename tree_type::iterator				iterator;
			typedef typename tree_type::const_iterator			const_iterator;
			typedef typename tree_type::difference_type			difference_type;
			typedef typename tree_type::size_type				size_type;
			typedef typename tree_type::reverse_iterator		reverse_iterator;
			typedef typename tree_type::const_reverse_iterator	const_reverse_iterator;

			// empty container constructor (default constructor) --> construct an empty container with no elements.
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) :
			 _size(0), _root(), _comp(comp), _allocator(alloc)
			{

			}
			// range constructor --> Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range.
			template <class InputIterator>
			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) :
				_size(0), _root(), _comp(comp), _allocator(alloc)
			{
				difference_type	nb = ft::distance(first, last);
				_size = nb;
				insert (first, last, comp, alloc);
			}
			// copy constructor --> Constructs a container with a copy of each of the elements in x.
			map (const map& x) :
			_size(x._size), _root(x._root), _comp(x._comp), _allocator(x._allocator)
			{
				insert (x.begin(), x.end(), x._comp, x._allocator);
			}
			// destructor --> This destroys all container elements, and deallocates all the storage capacity allocated by the map container using its allocator.
			~map()
			{
				_root.clear();
			}

		private:


			size_type		_size;
			tree_type		_root;
			key_compare		_comp;
			allocator_type	_allocator;

		public:

			iterator	begin()
			{
				return (_root.begin());
			}

			const_iterator	begin() const
			{
				return (_root.begin());
			}

			iterator	end()
			{
				return (_root.end());
			}

			const_iterator	end() const
			{
				return (_root.end());
			}

			void	clear()
			{
				_root.clear();
				_size = 0;
			}

			size_type	count(const key_type& k) const
			{
				return (_root.count(k));
			}

			// Returns whether the map container is empty (i.e. whether its size is 0).
			bool	empty() const
			{
				return (_size == 0);
			}

			pair<iterator, bool> insert	(const value_type& val)
			{
				pair<iterator, bool>	ret;
				ret.first = _root.insert(val);
				ret.second = true;
				_size++;
				return (ret);
			}




			


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