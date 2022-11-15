#ifndef RED_BLACK_TREE_ITERATOR_HPP
#define RED_BLACK_TREE_ITERATOR_HPP

#include "map.hpp"
#include "red_black_tree.hpp"
#include "nullptr.hpp"
#include "node.hpp"

namespace	ft
{

	/**************************************************************************************************************
	---------------------------------------------------------------------------------------------------------------
													RED BLACK TREE ITERATOR
	---------------------------------------------------------------------------------------------------------------
	**************************************************************************************************************/

	template<class VT, class node>
	class RedBlackTreeIterator : public ft::iterator<std::bidirectional_iterator_tag, VT>
	{
		public:

			
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::difference_type		difference_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::iterator_category	iterator_category;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT >::pointer				pointer;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::reference			reference;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::iterator_type		value_type;
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
				// std::cout << "RBT iterator constructor empty" << std::endl;
			}

			// RedBlackTreeIterator(node_ptr_type &my_node)
			RedBlackTreeIterator(NodePtr &my_node)
			: _node(my_node)/* , _TNULL() */
            {
				// std::cout << "RBT iterator constructor 0" << std::endl;
			}

			// RedBlackTreeIterator(const node_ptr_type &my_node)
			RedBlackTreeIterator(const NodePtr &my_node)
			: _node(my_node)/* , _TNULL() */
            {
				// std::cout << "RBT iterator constructor 0" << std::endl;
			}

			// RedBlackTreeIterator(const node_ptr_type &my_node, const node_ptr_type &my_TNULL)
			RedBlackTreeIterator(const NodePtr &my_node, const NodePtr &my_TNULL, const NodePtr &my_root)
				: _root(my_root), _node(my_node), _TNULL(my_TNULL)
			{
				// std::cout << "RBT iterator constructor 1" << std::endl;
			}

			RedBlackTreeIterator(const RedBlackTreeIterator &other)
				: _root(other._root), _node(other._node), _TNULL(other._TNULL)
			{
				// std::cout << "RBT iterator constructor 2" << std::endl;
			}

			~RedBlackTreeIterator()
			{
				// std::cout << "RBT iterator destructor" << std::endl;
			}

			/*
			---------------------------------------------------------------------------------------------------------------
															RELATIONAL OPERATORS RBT ITERATOR
			---------------------------------------------------------------------------------------------------------------
			*/

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
				this->_node = other._node;
				this->_TNULL = other._TNULL;
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

			NodePtr minimum(NodePtr x) {
				while (x->left != _TNULL) {
					x = x->left;
				}
				return x;
			}

			NodePtr maximum(NodePtr x)
			{
				while (x->right != _TNULL) 
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
				if (x->right != _TNULL) {
					_node = minimum(x->right);
					return ;
				}
				NodePtr y = x->parent;
				while (y != my_nullptr && x == y->right) {
					x = y;
					y = y->parent;
				}
				if (y == my_nullptr) {
					_node = _TNULL;
					return;
				}
				_node = y;
			}

			void	_decrement()
			{
				NodePtr x = _node;
				if (_node == _TNULL)
				{
					_node =  maximum(_root);
                    return ;
				}
				NodePtr y = x->parent;
				while (y != my_nullptr && x == y->left)
				{
					x = y;
					y = y->parent;
				}
				if (y == my_nullptr && _node != minimum(_root)) {
					_node = minimum(_root);
					return;
				}
				else if (y == my_nullptr)
				{
					_node = _TNULL;
					return ;
				}
				_node = y;
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

// 	/**************************************************************************************************************
// 	---------------------------------------------------------------------------------------------------------------
// 													RED BLACK TREE CONST ITERATOR
// 	---------------------------------------------------------------------------------------------------------------
// 	**************************************************************************************************************/

// 	template<class VT, class node>
// 	class RedBlackTreeConstIterator : public ft::iterator<std::bidirectional_iterator_tag, VT>
// 	{
// 		public:

			
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::difference_type		difference_type;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::iterator_category	iterator_category;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT >::pointer				pointer;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::reference			reference;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::iterator_type		value_type;
// 			typedef RedBlackTreeIterator<VT, node>													self;
// 			typedef node																			*NodePtr;

// 		public:

// 			/*
// 			---------------------------------------------------------------------------------------------------------------
// 															CONSTRUCTOR AND DESTRUCTOR RBT ITERATOR
// 			---------------------------------------------------------------------------------------------------------------
// 			*/

// 			RedBlackTreeIterator()
// 			: _node(), _TNULL()
// 			{
// 				// std::cout << "RBT iterator constructor empty" << std::endl;
// 			}

// 			// RedBlackTreeIterator(node_ptr_type &my_node)
// 			RedBlackTreeIterator(NodePtr &my_node)
// 			: _node(my_node)/* , _TNULL() */
//             {
// 				// std::cout << "RBT iterator constructor 0" << std::endl;
// 			}

// 			// RedBlackTreeIterator(const node_ptr_type &my_node)
// 			RedBlackTreeIterator(const NodePtr &my_node)
// 			: _node(my_node)/* , _TNULL() */
//             {
// 				// std::cout << "RBT iterator constructor 0" << std::endl;
// 			}

// 			// RedBlackTreeIterator(const node_ptr_type &my_node, const node_ptr_type &my_TNULL)
// 			RedBlackTreeIterator(const NodePtr &my_node, const NodePtr &my_TNULL, const NodePtr &my_root)
// 				: _root(my_root), _node(my_node), _TNULL(my_TNULL)
// 			{
// 				// std::cout << "RBT iterator constructor 1" << std::endl;
// 			}

// 			RedBlackTreeIterator(const RedBlackTreeIterator &other)
// 				: _root(other._root), _node(other._node), _TNULL(other._TNULL)
// 			{
// 				// std::cout << "RBT iterator constructor 2" << std::endl;
// 			}

// 			~RedBlackTreeIterator()
// 			{
// 				// std::cout << "RBT iterator destructor" << std::endl;
// 			}

// 			/*
// 			---------------------------------------------------------------------------------------------------------------
// 															RELATIONAL OPERATORS RBT ITERATOR
// 			---------------------------------------------------------------------------------------------------------------
// 			*/

// 			self &operator++()
// 			{
// 				_increment();
// 				return (*this);
// 			}


// 			self operator++(int)
// 			{
// 				self tmp(*this);
// 				_increment();
// 				return (tmp);
// 			}

// 			RedBlackTreeIterator &operator--()
// 			{
// 				_decrement();
// 				return (*this);
// 			}
// 			RedBlackTreeIterator operator--(int)
// 			{
// 				RedBlackTreeIterator tmp(*this);
// 				_decrement();
// 				return (tmp);
// 			}

// 			RedBlackTreeIterator &operator=(const RedBlackTreeIterator &other)
// 			{
// 				this->_node = other._node;
// 				this->_TNULL = other._TNULL;
// 				return (*this);
// 			}

// 			bool operator==(const RedBlackTreeIterator &other) const
// 			{
// 				return (this->_node == other._node);
// 			}
// 			bool operator!=(const RedBlackTreeIterator &other) const
// 			{
// 				return (this->_node != other._node);
// 			}

// 			reference	operator*() const
// 			{
// 				return (this->_node->data);
// 			}

// 			VT	*operator->() const
// 			{
// 				return (&(this->_node->data));
// 			}

// 		/*
// 		---------------------------------------------------------------------------------------------------------------
// 														PRIVATE FUNCTIONS --> Utils
// 		---------------------------------------------------------------------------------------------------------------
// 		*/

// 		private:

// 			NodePtr minimum(NodePtr x) {
// 				while (x->left != _TNULL) {
// 					x = x->left;
// 				}
// 				return x;
// 			}

// 			NodePtr maximum(NodePtr x)
// 			{
// 				while (x->right != _TNULL) 
// 					x = x->right;
// 				return (x);
// 			}

// 			void _increment ()
// 			{
// 				if (_node == _TNULL)
// 				{
// 					_node = maximum(_root);
// 					return ;
// 				}
// 				NodePtr x = _node;
// 				if (x->right != _TNULL) {
// 					_node = minimum(x->right);
// 					return ;
// 				}
// 				NodePtr y = x->parent;
// 				while (y != my_nullptr && x == y->right) {
// 					x = y;
// 					y = y->parent;
// 				}
// 				if (y == my_nullptr) {
// 					_node = _TNULL;
// 					return;
// 				}
// 				_node = y;
// 			}

// 			void	_decrement()
// 			{
// 				NodePtr x = _node;
// 				if (_node == _TNULL)
// 				{
// 					_node =  maximum(_root);
//                     return ;
// 				}
// 				NodePtr y = x->parent;
// 				while (y != my_nullptr && x == y->left)
// 				{
// 					x = y;
// 					y = y->parent;
// 				}
// 				if (y == my_nullptr && _node != minimum(_root)) {
// 					_node = minimum(_root);
// 					return;
// 				}
// 				else if (y == my_nullptr)
// 				{
// 					_node = _TNULL;
// 					return ;
// 				}
// 				_node = y;
// 			}

// 		/*
// 		---------------------------------------------------------------------------------------------------------------
// 														PRIVATE VARIABLES
// 		---------------------------------------------------------------------------------------------------------------
// 		*/

// 		private:

// 			NodePtr	_root;
// 			NodePtr	_node;
// 			NodePtr	_TNULL;

// 	};
};


#endif
