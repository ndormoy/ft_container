/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   red_black_tree_iterator.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:30 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/23 13:19:18 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RED_BLACK_TREE_ITERATOR_HPP
#define RED_BLACK_TREE_ITERATOR_HPP

#include "map.hpp"
#include "red_black_tree.hpp"
#include "iterator_traits.hpp"
#include "nullptr.hpp"
#include "pair.hpp"
#include "reverse_iterator.hpp"
#include "node.hpp"
#include "color.hpp"

namespace	ft
{

	/**************************************************************************************************************
	---------------------------------------------------------------------------------------------------------------
													RED BLACK TREE ITERATOR
	---------------------------------------------------------------------------------------------------------------
	**************************************************************************************************************/

	template<class VT, class node>
	class RedBlackTreeIterator
	{
		public:

			typedef typename ft::iterator<std::bidirectional_iterator_tag, VT>::difference_type		difference_type;
			typedef typename ft::iterator<std::bidirectional_iterator_tag, VT>::iterator_category	iterator_category;
			typedef typename ft::iterator<std::bidirectional_iterator_tag, VT >::pointer				pointer;
			typedef typename ft::iterator<std::bidirectional_iterator_tag, VT>::reference			reference;
			typedef typename ft::iterator<std::bidirectional_iterator_tag, VT>::iterator_type		value_type;
			typedef RedBlackTreeIterator<VT, node>													self;
			typedef node																			*NodePtr;

		public:

			/*
			---------------------------------------------------------------------------------------------------------------
															CONSTRUCTOR AND DESTRUCTOR RBT ITERATOR
			---------------------------------------------------------------------------------------------------------------
			*/

			RedBlackTreeIterator()
			: _node(), _TNULL()
			{
			}

			RedBlackTreeIterator(NodePtr &my_node)
			: _node(my_node)
            {
			}

			RedBlackTreeIterator(const NodePtr &my_node)
			: _node(my_node)
            {
			}

			RedBlackTreeIterator(const NodePtr &my_node, const NodePtr &my_TNULL, const NodePtr &my_root)
				: _root(my_root), _node(my_node), _TNULL(my_TNULL)
			{
			}

			RedBlackTreeIterator(const RedBlackTreeIterator &other)
				: _root(other._root), _node(other._node), _TNULL(other._TNULL)
			{
			}

			~RedBlackTreeIterator()
			{
			}

			/*
			---------------------------------------------------------------------------------------------------------------
															RELATIONAL OPERATORS RBT ITERATOR
			---------------------------------------------------------------------------------------------------------------
			*/

			/*
				Conversion operator
				-> You can overload type operators, so that your type can be implicitly converted into the specified type.
				here if VT is const, we can convert the iterator into a const_iterator so we can use the cont function implicitly.
			*/
			operator RedBlackTreeIterator<const VT, node> ()
			{
				return (RedBlackTreeIterator<const VT, node>(_node, _TNULL, _root));
			}

			self &operator++()
			{
				_increment();
				return (*this);
			}

			self operator++(int)
			{
				self tmp(*this);
				_increment();
				return (tmp);
			}

			RedBlackTreeIterator &operator--()
			{
				_decrement();
				return (*this);
			}
			RedBlackTreeIterator operator--(int)
			{
				RedBlackTreeIterator tmp(*this);
				_decrement();
				return (tmp);
			}

			RedBlackTreeIterator &operator=(const RedBlackTreeIterator &other)
			{
				if (this != &other)
				{
					_node = other._node;
					_TNULL = other._TNULL;
					_root = other._root;
				}
				return (*this);
			}

			bool operator==(const RedBlackTreeIterator &other) const
			{
				return (this->_node == other._node);
			}
			bool operator!=(const RedBlackTreeIterator &other) const
			{
				return (this->_node != other._node);
			}

			reference	operator*() const
			{
				return (this->_node->data);
			}

			VT	*operator->() const
			{
				return (&(this->_node->data));
			}

		/*
		---------------------------------------------------------------------------------------------------------------
														PRIVATE FUNCTIONS --> Utils
		---------------------------------------------------------------------------------------------------------------
		*/

		private:

			NodePtr minimum(NodePtr x) const
			{
				if (!x)
					return (_TNULL);
				while (x->left && x->left != _TNULL)
					x = x->left;
				return x;
			}

			NodePtr maximum(NodePtr x) const
			{
				if (!x)
					return (_TNULL);
				while (x->right && x->right != _TNULL) 
					x = x->right;
				return (x);
			}

			void _increment ()
			{
				if (_node == _TNULL)
				{
					_node = maximum(_root);
					return ;
				}
				NodePtr x = _node;
				if (x->right != _TNULL)
				{
					_node = minimum(x->right);
					return ;
				}
				NodePtr y = x->parent;
				while (y != my_nullptr && x == y->right)
				{
					x = y;
					y = y->parent;
				}
				if (y == my_nullptr)
				{
					_node = _TNULL;
					return;
				}
				_node = y;
			}

			// void	_decrement()
			// {
			// 	NodePtr x = _node;
			// 	if (_node == _TNULL)
			// 	{
			// 		_node =  maximum(_root);
            //         return ;
			// 	}
			// 	NodePtr y = x->parent;
			// 	while (y != my_nullptr && x == y->left)
			// 	{
			// 		x = y;
			// 		y = y->parent;
			// 	}
			// 	if (y == my_nullptr && _node != minimum(_root))
			// 	{
			// 		_node = minimum(_root);
			// 		return;
			// 	}
			// 	else if (y == my_nullptr)
			// 	{
			// 		_node = _TNULL;
			// 		return ;
			// 	}
			// 	_node = y;
			// }

			void	_decrement()
			{
				NodePtr x = _node;
				if (_node == _TNULL)
				{
					_node =  maximum(_root);
                    return ;
				}
				if (x->left != _TNULL)
				{
					_node = maximum(x->left);
					return ;
				}
				NodePtr tmp = x->parent;
				while (tmp != _TNULL && x == tmp->left)
				{
					x = tmp;
					tmp = tmp->parent;
				}
				_node = tmp;
			}

		/*
		---------------------------------------------------------------------------------------------------------------
														PRIVATE VARIABLES
		---------------------------------------------------------------------------------------------------------------
		*/

		private:

			NodePtr	_root;
			NodePtr	_node;
			NodePtr	_TNULL;

	};

};


#endif
