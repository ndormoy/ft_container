#ifndef MAP_HPP
#define MAP_HPP

#include <functional> 
#include <algorithm> 
#include <memory.h>
#include <iostream>
#include <string>
#include "red_black_tree.hpp"
#include "red_black_tree_iterator.hpp"
#include "pair.hpp"
#include "node.hpp"
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
			typedef ft::pair<const key_type, mapped_type>		value_type; // The type of the value (A pair of const key_type and mapped_type)
			typedef Compare										key_compare; // The type of the comparison function
			typedef Alloc										allocator_type; // The type of the allocator
			typedef typename allocator_type::reference			reference; // The type of the reference
			typedef typename allocator_type::const_reference	const_reference; // The type of the const reference
			typedef typename allocator_type::pointer			pointer;
			typedef typename allocator_type::const_pointer		const_pointer;
			typedef RedBlackTree<value_type, Compare, Alloc>	tree_type;
			typedef typename tree_type::difference_type			difference_type;
			typedef typename tree_type::size_type				size_type;
			// typedef typename tree_type::reverse_iterator		reverse_iterator;
			// typedef typename tree_type::const_reverse_iterator	const_reverse_iterator;

			typedef typename tree_type::NodePtr 				TNULL_type;
			typedef typename tree_type::NodePtr 				NodePtr;

			typedef RedBlackTreeIterator<value_type, Node<value_type> >			iterator;
			typedef RedBlackTreeIterator<const value_type, Node<value_type> >	const_iterator;

			// create typename to have first in map class

			// empty container constructor (default constructor) --> construct an empty container with no elements.
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) :
			 _size(0), _root(), _comp(comp), _allocator(alloc)
			{
				_TNULL = _root.getTNULL();
				// std::cout << "default constructor Map" << std::endl;
			}
			// range constructor --> Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range.
			template <class InputIterator>
			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) :
				_size(0), _root(), _comp(comp), _allocator(alloc)
			{
				// std::cout << "range constructor Map" << std::endl;
				_TNULL = _root.getTNULL();
				difference_type	nb = ft::distance(first, last);
				_size = nb;
				insert (first, last, comp, alloc);
			}
			// copy constructor --> Constructs a container with a copy of each of the elements in x.
			map (const map& x) :
			_size(x._size), _root(x._root), _comp(x._comp), _allocator(x._allocator)
			{
				_TNULL = _root.getTNULL();
				// std::cout << "copy constructor Map" << std::endl;
				insert (x.begin(), x.end(), x._comp, x._allocator);
			}
			// destructor --> This destroys all container elements, and deallocates all the storage capacity allocated by the map container using its allocator.
			~map()
			{
				if (_size)
					_root.clear();
			}

		private:


			size_type		_size;
			tree_type		_root;
			key_compare		_comp;
			allocator_type	_allocator;
			TNULL_type		_TNULL;

		public:

			//Returns an iterator referring to the first element in the map container.
			iterator	begin()
			{
				return (iterator(_root.begin(), _TNULL));
			}

			//Returns a const iterator referring to the first element in the map container.
			const_iterator	begin() const
			{
				return (const_iterator(_root.begin(), _TNULL));
			}

			iterator	end()
			{
				iterator it = iterator(_root.end(), _TNULL);
				it++;
				return (it);
			}

			const_iterator	end() const
			{
				const_iterator it = const_iterator(_root.end(), _TNULL);
				it++;
				return (it);
			}


			void	clear()
			{
				_root.clear();
				_size = 0;
			}

			// Returns whether the map container is empty (i.e. whether its size is 0).
			bool	empty() const
			{
				return (_size == 0);
			}

			//Searches the container for an element with a key equivalent to k and returns an iterator to it if found, otherwise it returns an iterator to map::end.
			iterator find(const key_type& k)
			{
				NodePtr to_search = _root.searchTree(k);
				if (_size == 0)
					return (end());
				if (to_search == _root.getTNULL())
					return (end());
				return (iterator(to_search, _root.getTNULL()));
			}

			const_iterator find(const key_type& k) const
			{
				NodePtr to_search = _root.searchTree(k);
				if (_size == 0)
					return (end());
				if (to_search == _root.getTNULL())
					return (end());
				return (const_iterator(to_search, _root.getTNULL()));
			}

			//Single element insertion
			//Extends the container by inserting new elements, effectively increasing the container size by the number of elements inserted.
			//return a pair, with its member pair::first set to an iterator pointing to either the newly inserted element or to the element with an equivalent key in the map. The pair::second element in the pair is set to true if a new element was inserted or false if an equivalent key already existed.
			ft::pair<iterator,bool> insert (const value_type& val)
			{
				bool ret = true;
				if (_root.insert(val) == NULL)
					ret = false; // already exist in the map
				else
					_size++;
				return (make_pair(iterator(_root.searchTree(val.first), _TNULL), ret));
			}

			// With hint insertion
			//postion --> Hint for the position where the element can be inserted.
			//return an iterator pointing to either the newly inserted element or to the element that already had an equivalent key in the map.

			iterator insert (iterator position, const value_type& val)
			{
				(void)position;
				iterator ret;
				if ((ret = _root.insert(val)) != NULL)
					_size++; // already exist in the map
				return (ret);
				// return (iterator(_root.searchTree(val.first), _TNULL));
			}

			// range insertion
			template <class InputIterator>
			void insert (InputIterator first, InputIterator last)
			{
				while (first != last)
				{
					if (_root.insert(*first) != NULL)
						_size++;
					first++;
				}
			}


			//Count elements with a specific key --> return 1 if the container contains an element whose key is equivalent to k, or zero otherwise.

			size_type	count(const key_type& k)
			{
				iterator it = find(k);
				if (it == end())
					return (0);
				return (1);
			}

			//Removes from the map container either a single element
			void	erase(iterator position)
			{
				if (_root.deleteNode(*position) == true)
					_size--;
			}

			//Remove elements with specific key : k
			// return the number of elements erased. (Here 1 or 0 because we can't have 2 elements with the same key)
			size_type erase (const key_type& k)
			{
				iterator it = find(k);
				if (it == end())
					return (0);
				_root.deleteNode(*it);
				_size--;
				return (1);
			}

			//erase range
			//Removes from the map container either a range of elements ([first,last)).
			void	erase(iterator first, iterator last)
			{
				iterator tmp;
				while (first != last)
				{
					tmp = first;
					first++;
					if (_root.deleteNode(*tmp) == true)
						_size--;
					
				}
			}

			void	print_map()
			{
				_root.printTree();
			}



	};

	template <class Key, class T, class Compare, class Alloc>
	bool operator== (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs)
	{
		if (lhs.size() != rhs.size())
			return (false);
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	}

	template <class Key, class T, class Compare, class Alloc>
	bool operator!= (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs)
	{
		return (!(lhs == rhs));
	}

	template <class Key, class T, class Compare, class Alloc>
	bool operator<  (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}

	template <class Key, class T, class Compare, class Alloc>
	bool operator<= (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs)
	{
		return (!(rhs < lhs));
	}

	template <class Key, class T, class Compare, class Alloc>
	bool operator>  (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs)
	{
		return (rhs < lhs);
	}

	template <class Key, class T, class Compare, class Alloc>
	bool operator>= (const map<Key,T,Compare,Alloc>& lhs, const map<Key,T,Compare,Alloc>& rhs)
	{
		return (!(lhs < rhs));
	}


};

#endif