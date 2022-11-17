/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:12 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/17 16:50:31 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <functional> // --> binaryfunction
#include <limits> // --> numeric_limits

#include <map> //TODO TO DEL

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

			/*
			----------------------------------------------------------------------------------------------------------------
			                                                TYPEDEFS FROM TEMPLATE
			----------------------------------------------------------------------------------------------------------------
			*/

			typedef map											self; // map<Key,T,Compare,Alloc>
			typedef Key											key_type; // the key of the map
			typedef T											mapped_type; // The type of the mapped value
			typedef ft::pair<const key_type, mapped_type>		value_type; // The type of the value (A pair of const key_type and mapped_type)
			typedef Compare										key_compare; // The type of the comparison function
			typedef Alloc										allocator_type; // The type of the allocator

			/*
			----------------------------------------------------------------------------------------------------------------
			                                                Nested class value_compare
			----------------------------------------------------------------------------------------------------------------
			*/

			// A binary function object that returns true the first argument is less than the second --> beacause of the key_compare who is std::less<Key> by default

			class	value_compare : public std::binary_function<value_type, value_type, bool>
			{
				friend class map;
				protected:
					key_compare comp;
					value_compare (key_compare c) : comp(c) {}
				public:
					typedef bool result_type;
					typedef value_type first_argument_type;
					typedef value_type second_argument_type;
					bool operator() (const value_type& x, const value_type& y) const
					{
						return comp(x.first, y.first);
					}
			};

			/*
			----------------------------------------------------------------------------------------------------------------
			                                                TYPEDEFS
			----------------------------------------------------------------------------------------------------------------
			*/

			/*
				From allocator_type 
			*/

			typedef typename allocator_type::reference							reference; // The type of the reference
			typedef typename allocator_type::const_reference					const_reference; // The type of the const reference
			typedef typename allocator_type::pointer							pointer; // The type of the pointer
			typedef typename allocator_type::const_pointer						const_pointer; // The type of the const pointer

			/*
				Related to the red black tree
			*/

			typedef RedBlackTree<value_type, Compare, Alloc>					tree_type; // The type of the tree
			typedef typename tree_type::difference_type							difference_type; // The type of the difference between two iterators
			typedef typename tree_type::size_type								size_type; // The type of the size of the tree
			typedef typename tree_type::NodePtr 								TNULL_type; // The type of the TNULL node --> represent the end of the tree at all of its sides
			typedef typename tree_type::NodePtr 								NodePtr; // The type of the node pointer --> represent a node of the tree

			/*
				For iterators and reverse iterators
			*/

			typedef RedBlackTreeIterator<value_type, Node<value_type> >			iterator; // The type of the iterator --> give value_type (The pair) and the node
			typedef RedBlackTreeIterator<const value_type, Node<value_type> >	const_iterator;
			typedef typename ft::reverse_iterator<iterator>						reverse_iterator; // The type of the reverse iterator
			typedef typename ft::reverse_iterator<const_iterator>				const_reverse_iterator; // The type of the const reverse iterator

			/*
			----------------------------------------------------------------------------------------------------------------
			                                                CONSTRUCTORS
			----------------------------------------------------------------------------------------------------------------
			*/

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
				insert (first, last);
			}

			map (const map & x) :
			_size(x._size), _root(x._root), _comp(x._comp), _allocator(x._allocator)
			{
				_TNULL = _root.getTNULL();
				// std::cout << "copy constructor Map" << std::endl;
				// const_iterator begin = const_iterator(_root.const_begin(), _TNULL, _root.const_getRoot());
				// const_iterator end = const_iterator(_root.const_end(), _TNULL, _root.const_getRoot());
				// insert (begin, end);
				insert (x.begin(), x.end());
				// *this = x;
			}

			// destructor --> This destroys all container elements, and deallocates all the storage capacity allocated by the map container using its allocator.
			~map()
			{
				// if (_size)
				// 	_root.clear();
			}

			/*
			----------------------------------------------------------------------------------------------------------------
										                    PUBLIC MEMBER FUNCTIONS
			----------------------------------------------------------------------------------------------------------------
			*/

		public:

			// Returns an iterator referring to the first element in the map container.
			iterator	begin()
			{
				return (iterator(_root.begin(), _TNULL, _root.getRoot()));
			}

			//Returns a const iterator referring to the first element in the map container.
			const_iterator	begin() const
			{
				return (const_iterator(_root.const_begin(), _TNULL, _root.const_getRoot()));
			}

			iterator	end()
			{
				iterator it = iterator(_root.end(), _TNULL, _root.getRoot());
				it++;
				return (it);
			}

			const_iterator	end() const
			{
				const_iterator it = const_iterator(_root.const_end(), _TNULL, _root.const_getRoot());
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
				else if (to_search == _root.getTNULL())
					return (end());
				return (iterator(to_search, _root.getTNULL(), _root.const_getRoot()));
			}

			const_iterator find(const key_type& k) const
			{
				NodePtr to_search = _root.const_searchTree(k);
				// if (_size == 0)
				// 	return (end());
				// if (to_search == _root.getTNULL())
				// 	return (end());
				if (_size == 0)
					return (_TNULL);
				if (to_search == _root.getTNULL())
					return (_TNULL);
				return (const_iterator(to_search, _root.getTNULL(), _root.const_getRoot()));
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
				return (ft::make_pair(iterator(_root.searchTree(val.first), _TNULL, _root.getRoot()), ret));
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

			//Returns the number of elements in the map container.
			size_type	size() const
			{
				return (_size);
			}

			//Returns the maximum number of elements that the map container can hold.
			size_type	max_size() const
			{
				return (std::numeric_limits<difference_type>::max() / sizeof(Node<value_type>));
			}

			//Returns an iterator pointing to the first element in the container whose key is not considered to go before k or map::end if all keys are considered to go before k.
			iterator lower_bound (const key_type& k)
			{
				iterator it = find(k);
				if (it == end())
					return (end());
				return (it);
			}

			const_iterator lower_bound (const key_type& k) const
			{
				const_iterator it = find(k);
				if (it == end())
					return (end());
				return (it);
			}

			//Returns an iterator pointing to the first element in the container whose key is considered to go after k.
			iterator upper_bound (const key_type& k)
			{
				iterator it = find(k);
				if (it == end())
					return (end());
				it++;
				return (it);
			}

			const_iterator upper_bound (const key_type& k) const
			{
				const_iterator it = find(k);
				if (it == end())
					return (end());
				it++;
				return (it);
			}

			//Returns a copy of the allocator object associated with the map.
			allocator_type get_allocator() const
			{
				return (allocator_type());
			}

			//Returns a copy of the comparison object used by the container to compare keys.
			key_compare key_comp() const
			{
				return (key_compare());
			}

			//returns a comparison object that can be used to compare two elements to get whether the key of the first one goes before the second.
			value_compare value_comp() const
			{
				return (value_compare(_comp));
			}
	
			//Returns the bounds of a range that includes all the elements in the container which have a key equivalent to k.
			//The function returns a pair, whose member pair::first is the lower bound of the range (the same as lower_bound), and pair::second is the upper bound (the same as upper_bound).
			ft::pair<iterator, iterator> equal_range (const key_type& k)
			{
				return (ft::make_pair(lower_bound(k), upper_bound(k)));
			}

			ft::pair<const_iterator, const_iterator> equal_range (const key_type& k) const
			{
				return (ft::make_pair(lower_bound(k), upper_bound(k)));
			}

			// Swap content
			// Exchanges the content of the container by the content of x, which is another map of the same type. Sizes may differ.
			void swap(map<Key, T, Compare, Alloc>& x)
			{
				size_type		tmp_size = _size;
				tree_type		tmp_root = _root;
				key_compare		tmp_comp = _comp;
				allocator_type	tmp_allocator = _allocator;
				TNULL_type		tmp_TNULL = _TNULL;
				_size = x._size;
				_root = x._root;
				_comp = x._comp;
				_allocator = x._allocator;
				_TNULL = x._TNULL;
				x._size = tmp_size;
				x._root = tmp_root;
				x._comp = tmp_comp;
				x._allocator = tmp_allocator;
				x._TNULL = tmp_TNULL;
			}

			//TODO TO DEL
			void	print_map()
			{
				_root.printTree();
			}

			/*
			----------------------------------------------------------------------------------------------------------------
															OPERATORS
			----------------------------------------------------------------------------------------------------------------
			*/

			//If k matches the key of an element in the container, the function returns a reference to its mapped value.
			//If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. 
			mapped_type	&operator[](const key_type& k)
			{
				iterator it = find(k);
				if (it == end())
				{
					insert(ft::make_pair(k, mapped_type()));
					it = find(k);
					return (find(k)->second);
					
				}
				return (it->second);
			}

			//Assigns new contents to the container, replacing its current content.
			map	&operator=(const map &x)
			{
				if (this != &x)
				{
					_comp = x._comp;
					_allocator = x._allocator;
					clear();
					insert(x.begin(), x.end());
				}
				return (*this);
			}

			/*
			----------------------------------------------------------------------------------------------------------------
															REVERSE
			----------------------------------------------------------------------------------------------------------------
			*/


			//Return reverse iterator to reverse beginning
			reverse_iterator rbegin()
			{
				return (reverse_iterator(end()));
			}

			const_reverse_iterator rbegin() const
			{
				return (const_reverse_iterator(end()));
			}

			//Return reverse iterator to reverse end
            reverse_iterator rend()
			{
                return (reverse_iterator(begin()));
            }

			const_reverse_iterator rend() const
            {
				return (const_reverse_iterator(begin()));
			}

		private:

			size_type		_size;
			tree_type		_root;
			key_compare		_comp;
			allocator_type	_allocator;
			TNULL_type		_TNULL;

	};

	/*
	----------------------------------------------------------------------------------------------------------------
													RELATIONAL NON MEMBER OPERATORS 
	----------------------------------------------------------------------------------------------------------------
	*/

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

	/*
	----------------------------------------------------------------------------------------------------------------
													NON MEMBER FUNCTIONS
	----------------------------------------------------------------------------------------------------------------
	*/

	template <class Key, class T, class Compare, class Alloc>
	void swap (map<Key,T,Compare,Alloc>& x, map<Key,T,Compare,Alloc>& y)
	{
		x.swap(y);
	}

};

#endif