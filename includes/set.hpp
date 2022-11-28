#ifndef SET_HPP
#define SET_HPP

#include <functional> 
#include <algorithm> 
#include <memory.h>
#include <iostream>
#include <string>
#include "pair.hpp"
#include "iterator_traits.hpp"
#include "reverse_iterator.hpp"
#include "nullptr.hpp"
#include "node.hpp"
#include "vector_utils.hpp"
#include "set_red_black_tree.hpp"
// #include "set_red_black_tree_iterator.hpp"
#include "red_black_tree_iterator.hpp"
#include "equal.hpp"


#include <functional> // --> binaryfunction
#include <limits> // --> numeric_limits

// #include "includes.hpp"

namespace ft
{
	template < class T, // set::key_type/value_type
		class Compare = std::less<T>, // set::key_compare
		class Alloc = std::allocator<T> // set::allocator_type
	>
	class	set
	{
		public:

			typedef	T															key_type;
			typedef T															value_type;
			typedef	Compare														key_compare;
			typedef	Compare														value_compare;
			typedef	Alloc														allocator_type;
			typedef	typename allocator_type::reference	reference;
			typedef	typename allocator_type::const_reference					const_reference;
			typedef	typename allocator_type::pointer	pointer;
			typedef	typename allocator_type::const_pointer						const_pointer;

			typedef SetRedBlackTree</* const  */value_type, Compare, Alloc>				tree_type; // The type of the tree
			typedef typename tree_type::difference_type							difference_type; // The type of the difference between two iterators
			typedef typename tree_type::size_type								size_type; // The type of the size of the tree
			typedef typename tree_type::NodePtr 								TNULL_type; // The type of the TNULL node --> represent the end of the tree at all of its sides
			typedef typename tree_type::NodePtr 								NodePtr; // The type of the node pointer --> represent a node of the tree

			typedef	ft::RedBlackTreeIterator<const value_type, ft::Node<value_type> >	iterator;
			typedef	ft::RedBlackTreeIterator<const value_type, ft::Node<value_type> >	const_iterator;
			typedef	ft::reverse_iterator<const_iterator>						reverse_iterator;
			typedef	ft::reverse_iterator<const_iterator>						const_reverse_iterator;

			/*
			----------------------------------------------------------------------------------------------------------------
			                                                CONSTRUCTORS
			----------------------------------------------------------------------------------------------------------------
			*/

			// empty container constructor (default constructor) --> construct an empty container with no elements.
			explicit set (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) :
			 _size(0), _root(), _comp(comp), _allocator(alloc)
			{
				_TNULL = _root.getTNULL();
			}

			// range constructor --> Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range.
			template <class InputIterator>
			set (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) :
				_size(0), _root(), _comp(comp), _allocator(alloc)
			{
				// std::cout << "range constructor set" << std::endl;
				_TNULL = _root.getTNULL();
				insert (first, last);
			}

			

			set (const set & x)
			{
				*this = x;
			}

			

			// destructor --> This destroys all container elements, and deallocates all the storage capacity allocated by the set container using its allocator.
			~set()
			{
				if (_size)
					_root.clear();
				_root.clear_TNULL();
			}

			/*
			----------------------------------------------------------------------------------------------------------------
										                    PUBLIC MEMBER FUNCTIONS
			----------------------------------------------------------------------------------------------------------------
			*/

		public:

			// Returns an iterator referring to the first element in the set container.
			iterator	begin()
			{
				return (iterator(_root.begin(), _root.getTNULL(), _root.getRoot()));
			}

			//Returns a const iterator referring to the first element in the set container.
			const_iterator	begin() const
			{
				return (const_iterator(_root.const_begin(), _root.const_getTNULL(), _root.const_getRoot()));
			}

			iterator	end()
			{
				iterator it = iterator(_root.end(), _root.getTNULL(), _root.getRoot());
				it++;
				return (it);
			}

			const_iterator	end() const
			{
				const_iterator it = const_iterator(_root.const_end(), _root.const_getTNULL(), _root.const_getRoot());
				it++;
				return (it);
			}

			void	clear()
			{
				if (_size)
				{
					_root.clear();
					_size = 0;
				}
			}

			// Returns whether the set container is empty (i.e. whether its size is 0).
			bool	empty() const
			{
				return (_size == 0);
			}

			//Searches the container for an element with a key equivalent to k and returns an iterator to it if found, otherwise it returns an iterator to set::end.
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
				if (_size == 0)
					return (end());
				if (to_search == _root.const_getTNULL())
					return (end());
				return (const_iterator(to_search, _root.const_getTNULL(), _root.const_getRoot()));
			}

			//Single element insertion
			//Extends the container by inserting new elements, effectively increasing the container size by the number of elements inserted.
			//return a pair, with its member pair::first set to an iterator pointing to either the newly inserted element or to the element with an equivalent key in the set. The pair::second element in the pair is set to true if a new element was inserted or false if an equivalent key already existed.
			ft::pair<iterator,bool> insert (const value_type& val)
			{
				bool ret = true;
				if (_root.insert(val) == NULL)
					ret = false; // already exist in the set
				else
					_size++;
				return (ft::make_pair(iterator(_root.searchTree(val), _root.getTNULL(), _root.getRoot()), ret));
			}

			// With hint insertion
			//postion --> Hint for the position where the element can be inserted.
			//return an iterator pointing to either the newly inserted element or to the element that already had an equivalent key in the set.

			iterator insert (iterator position, const value_type& val)
			{
				(void)position;
				iterator ret;
				if ((ret = _root.insert(val)) != NULL)
					_size++; // already exist in the set
				return (iterator(_root.searchTree(val), _root.getTNULL(), _root.getRoot()));
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
				if (it == end()/*  || !k */)
					return (0);
				return (1);
			}

			size_type	count(const key_type& k) const
			{
				const_iterator it = find(k);
				if (it == end())
					return (0);
				return (1);
			}

			//Removes from the set container either a single element
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
			//Removes from the set container either a range of elements ([first,last)).
			void	erase(iterator first, iterator last)
			{
				iterator tmp;
				while (first != last)
				{
					tmp = first;
					first++;
					if (_root.deleteNode(*tmp) == true)
						_size--;
					// erase(tmp->first);
					
				}
			}

			//Returns the number of elements in the set container.
			size_type	size() const
			{
				return (_size);
			}

			//Returns the maximum number of elements that the set container can hold.
			size_type	max_size() const
			{
				return (std::numeric_limits<difference_type>::max() / sizeof(Node<value_type>));
			}

			//Returns an iterator pointing to the first element in the container whose key is not considered to go before k or set::end if all keys are considered to go before k.

			iterator lower_bound (const key_type& k)
			{
				NodePtr tmp = _root.getRoot();
				NodePtr ret = _root.getTNULL();

				while (tmp != _root.getTNULL())
				{
					if (_comp(tmp->data, k))
					{
						tmp = tmp->right;
					}
					else
					{
						ret = tmp;
						tmp = tmp->left;
					}
					
				}
				return (iterator(ret, _root.getTNULL(), _root.getRoot()));
			}

			const_iterator lower_bound (const key_type& k) const
			{
				NodePtr tmp = _root.const_getRoot();
				NodePtr ret = _root.const_getTNULL();

				while (tmp != _root.const_getTNULL())
				{
					if (_comp(tmp->data, k))
					{
						tmp = tmp->right;
					}
					else
					{
						ret = tmp;
						tmp = tmp->left;
					}
					
				}
				return (const_iterator(ret, _root.const_getTNULL(), _root.const_getRoot()));
			}

			//Returns an iterator pointing to the first element in the container whose key is considered to go after k.

			iterator upper_bound (const key_type& k)
			{
				NodePtr tmp = _root.getRoot();
				NodePtr ret = _root.getTNULL();

				if (_root.getRoot() == _root.getTNULL())
					return (_root.getTNULL());
				while (tmp != _root.getTNULL())
				{
					if (!_comp(k, tmp->data))
					{
						tmp = tmp->right;
					}
					else 
					{
						ret = tmp;
						tmp = tmp->left;
						
					}
				}
				return (iterator(ret, _root.getTNULL(), _root.getRoot()));
			}

			const_iterator upper_bound (const key_type& k) const
			{
				NodePtr tmp = _root.const_getRoot();
				NodePtr ret = _root.const_getTNULL();

				if (_root.const_getRoot() == _root.const_getTNULL())
					return (_root.const_getTNULL());
				while (tmp != _root.const_getTNULL())
				{
					if (!_comp(k, tmp->data))
					{
						tmp = tmp->right;
					}
					else 
					{
						ret = tmp;
						tmp = tmp->left;
						
					}
				}
				return (const_iterator(ret, _root.const_getTNULL(), _root.const_getRoot()));
			}

			//Returns a copy of the allocator object associated with the set.
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
			// Exchanges the content of the container by the content of x, which is another set of the same type. Sizes may differ.
			void swap(set<T, Compare, Alloc>& x)
			{
				// if (this == &x)
				// 	return ;
				size_type		tmp_size = _size;
				tree_type		tmp_root = _root;
				key_compare		tmp_comp = _comp;
				allocator_type	tmp_allocator = _allocator;
				TNULL_type		tmp_TNULL = _root.getTNULL();
				_size = x._size;
				_root = x._root;
				_comp = x._comp;
				_allocator = x._allocator;
				_TNULL = x._root.getTNULL();
				x._size = tmp_size;
				x._root = tmp_root;
				x._comp = tmp_comp;
				x._allocator = tmp_allocator;
				x._TNULL = tmp_TNULL;
			}

			//TODO TO DEL
			void	print_set()
			{
				_root.printTree();
			}

			void	const_print_set() const
			{
				_root.const_printTree();
			}

			/*
			----------------------------------------------------------------------------------------------------------------
															OPERATORS
			----------------------------------------------------------------------------------------------------------------
			*/

			//Assigns new contents to the container, replacing its current content.
			set& operator= (const set& x)
			{
				if (this != &x)
				{
					clear();
					_allocator = x._allocator;
					_comp = x._comp;
					insert(x.begin(), x.end());
					_size = x._size;
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

	template <class T, class Compare, class Alloc>
	bool operator== (const set<T,Compare,Alloc>& lhs, const set<T,Compare,Alloc>& rhs)
	{
		if (lhs.size() != rhs.size())
			return (false);
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	}

	template <class T, class Compare, class Alloc>
	bool operator!= (const set<T,Compare,Alloc>& lhs, const set<T,Compare,Alloc>& rhs)
	{
		return (!(lhs == rhs));
	}

	template <class T, class Compare, class Alloc>
	bool operator<  (const set<T,Compare,Alloc>& lhs, const set<T,Compare,Alloc>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}

	template <class T, class Compare, class Alloc>
	bool operator<= (const set<T,Compare,Alloc>& lhs, const set<T,Compare,Alloc>& rhs)
	{
		return (!(rhs < lhs));
	}

	template <class T, class Compare, class Alloc>
	bool operator>  (const set<T,Compare,Alloc>& lhs, const set<T,Compare,Alloc>& rhs)
	{
		return (rhs < lhs);
	}

	template <class T, class Compare, class Alloc>
	bool operator>= (const set<T,Compare,Alloc>& lhs, const set<T,Compare,Alloc>& rhs)
	{
		return (!(lhs < rhs));
	}

	/*
	----------------------------------------------------------------------------------------------------------------
													NON MEMBER FUNCTIONS
	----------------------------------------------------------------------------------------------------------------
	*/

	template <class T, class Compare, class Alloc>
	void swap (set<T,Compare,Alloc>& x, set<T,Compare,Alloc>& y)
	{
		if (&x != &y)
			x.swap(y);
	}
};

#endif