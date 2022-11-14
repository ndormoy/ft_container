#ifndef RED_BLACK_TREE_ITERATOR_HPP
#define RED_BLACK_TREE_ITERATOR_HPP

#include "map.hpp"
#include "red_black_tree.hpp"
#include "nullptr.hpp"
#include "node.hpp"

namespace	ft
{
	template<class VT, class node>
	class RedBlackTreeIterator : public ft::iterator<std::bidirectional_iterator_tag, VT>
	{
		public:

			
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::difference_type		difference_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::iterator_category	iterator_category;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT >::pointer				pointer;
	
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::reference			reference;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, VT>::iterator_type		value_type;
			// typedef typename node::value_type														value_type;
			typedef RedBlackTreeIterator<VT, node>													self;

			typedef node																			*nodePtr;

		private:



		public:
			RedBlackTreeIterator()
			: _node(), _TNULL()
			{
				// std::cout << "RBT iterator constructor empty" << std::endl;
			}

			// RedBlackTreeIterator(node_ptr_type &my_node)
			RedBlackTreeIterator(nodePtr &my_node)
			: _node(my_node)/* , _TNULL() */
            {
				// std::cout << "RBT iterator constructor 0" << std::endl;
			}

			// RedBlackTreeIterator(const node_ptr_type &my_node)
			RedBlackTreeIterator(const nodePtr &my_node)
			: _node(my_node)/* , _TNULL() */
            {
				// std::cout << "RBT iterator constructor 0" << std::endl;
			}

			// RedBlackTreeIterator(const node_ptr_type &my_node, const node_ptr_type &my_TNULL)
			RedBlackTreeIterator(const nodePtr &my_node, const nodePtr &my_TNULL)
				: _node(my_node), _TNULL(my_TNULL)
			{
				// std::cout << "RBT iterator constructor 1" << std::endl;
			}

			RedBlackTreeIterator(const RedBlackTreeIterator &other)
				: _node(other._node), _TNULL(other._TNULL)
			{
				// std::cout << "RBT iterator constructor 2" << std::endl;
			}

			~RedBlackTreeIterator()
			{
				// std::cout << "RBT iterator destructor" << std::endl;
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
				// std::cout << "operator*" << std::endl;
				return (this->_node->data);
			}

			VT	*operator->() const
			{
				// std::cout << "operator->" << std::endl;
				return (&(this->_node->data));
			}

		private:

			// void _increment()
			// {
			// 	if (_node != _TNULL)
			// 	{
			// 		if (_node->right != _TNULL)
			// 		{
			// 			std::cout << "first if" << std::endl;
			// 			_node = _node->right;
			// 			while (_node->left != _TNULL)
			// 				_node = _node->left;
			// 		}
			// 		else
			// 		{
			// 			std::cout << "second if" << std::endl;
			// 			// node_ptr_type y = _node->parent;
			// 			nodePtr y = _node->parent;
			// 			while (y && y != _TNULL && _node == y->right)
			// 			{
			// 				_node = y;
			// 				y = y->parent;
			// 			}
			// 			if (_node->right != y)
			// 				_node = y;
			// 			// _node = y;
			// 			std::cout << "addr: " << _node << std::endl;
			// 		}
			// 	}
			// }
			nodePtr minimum(nodePtr x) {
				while (x->left != _TNULL) {
					x = x->left;
				}
				return x;
			}

			nodePtr maximum(nodePtr x)
			{
				while (x->right != _TNULL) 
					x = x->right;
				// while (x->right != my_nullptr) 
				// x = x->right;
				return (x);
			}

			nodePtr predecessor(nodePtr x)
			{
				if (x->left != _TNULL)
					return maximum(x->left);
	
				nodePtr y = x->parent;
				while (y != _TNULL && x == y->left)
				{
					x = y;
					y = y->parent;
				}
				return y;
			}

			void _increment () {
				if (_node == _TNULL)
					return ;
				nodePtr x = _node;
				// std::cout << "x->right = " << x->right << std::endl;
				// std::cout << "x->left = " << x->left << std::endl;
				if (x->right != _TNULL) {
					_node = minimum(x->right);
					return ;
				}
				nodePtr y = x->parent;
				while (y != my_nullptr && x == y->right) {
					x = y;
					y = y->parent;
				}
				if (y == my_nullptr) {
					// std::cout << "--------" << std::endl;
					// std::cout << "x->right = " << x->right->data.first << std::endl;
					// std::cout << "x->left = " << x->left->data.first << std::endl;
					// std::cout << "--------" << std::endl;
					_node = _TNULL;
					_node->left = x->left;
					_node->right = x->right;
					return;
				}
				_node = y;
			}

			void	_decrement()
			{
				nodePtr x = _node;
				if (_node == _TNULL)
				{
					std::cout << "x->data.first = " << x->data.first << std::endl;
					_node =  maximum(x);
					std::cout << "node->data.first = " << _node->data.first << std::endl;
                    return ;
				}
				nodePtr y = x->parent;
				while (y != my_nullptr && x == y->left)
				{
					x = y;
					y = y->parent;
				}
				std::cout << "here : x->data.first = " << x->left->data.first << std::endl;
				if (y == my_nullptr) {
					_node = _TNULL;
					// _node->left = x->left;
					// _node->right = x->right;
					return;
				}
				_node  = y;
			}

			// void	_decrement()
			// {
			// 	if (_node)
			// 	{
			// 		if (_node->left!= _TNULL)
			// 		{
			// 			std::cout << "first if" << std::endl;
			// 			_node = _node->left;
			// 			while (_node && _node != _TNULL && _node->right != _TNULL)
			// 				_node = _node->right;
			// 		}
			// 		else
            //         {
			// 			std::cout << "second if" << std::endl;
            //             _node = _node->parent;
			// 			while (_node && _node != _TNULL && _node->left == _node)
			// 				_node = _node->parent;
			// 		}
			// 	}
			// 	else
            //         _node = _TNULL;

			// }


		private:


			// pointer	_node;
			// pointer	_TNULL;

			nodePtr	_node;
			nodePtr	_TNULL;

	};
};


#endif

// namespace	ft
// {
// 	template<typename value_type, typename node>
// 	class RedBlackTreeIterator
// 	{
// 		public:

// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type		difference_type;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, node >::pointer					pointer;
// 			// typedef typename ft::iterator<ft::bidirectional_iterator_tag, node >::pointer					node_ptr_type;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;
// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_type		iterator_type;
// 			typedef RedBlackTreeIterator<value_type, node>													self;

// 			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::value_type			value_type;

// 			RedBlackTreeIterator()
// 			: _node(), _TNULL()
// 			{
// 				// std::cout << "RBT iterator constructor empty" << std::endl;
// 			}

// 			// RedBlackTreeIterator(node_ptr_type &my_node)
// 			RedBlackTreeIterator(pointer &my_node)
// 			: _node(my_node)/* , _TNULL() */
//             {
// 				// std::cout << "RBT iterator constructor 0" << std::endl;
// 			}

// 			// RedBlackTreeIterator(const node_ptr_type &my_node)
// 			RedBlackTreeIterator(const pointer &my_node)
// 			: _node(my_node)/* , _TNULL() */
//             {
// 				// std::cout << "RBT iterator constructor 0" << std::endl;
// 			}

// 			// RedBlackTreeIterator(const node_ptr_type &my_node, const node_ptr_type &my_TNULL)
// 			RedBlackTreeIterator(const pointer &my_node, const pointer &my_TNULL)
// 				: _node(my_node), _TNULL(my_TNULL)
// 			{
// 				// std::cout << "RBT iterator constructor 1" << std::endl;
// 			}

// 			RedBlackTreeIterator(const RedBlackTreeIterator &other)
// 				: _node(other._node), _TNULL(other._TNULL)
// 			{
// 				// std::cout << "RBT iterator constructor 2" << std::endl;
// 			}

// 			~RedBlackTreeIterator()
// 			{
// 				// std::cout << "RBT iterator destructor" << std::endl;
// 			}

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
// 				// std::cout << "operator*" << std::endl;
// 				return (this->_node->data);
// 			}

// 			value_type	*operator->() const
// 			{
// 				// std::cout << "operator->" << std::endl;
// 				return (&(this->_node->data));
// 			}

// 		private:

// 			void _increment()
// 			{
// 				//TODO TODEL
// 				// if (_node == _TNULL)
// 				// 	return ;
// 				if (_node->right != _TNULL)
// 				{
// 					_node = _node->right;
// 					while (_node->left != _TNULL)
// 						_node = _node->left;
// 				}
// 				else
// 				{
// 					// node_ptr_type y = _node->parent;
// 					pointer y = _node->parent;
// 					while (y && y != _TNULL && _node == y->right)
// 					{
// 						_node = y;
// 						y = y->parent;
// 					}
// 					if (_node->right != y)
// 						_node = y;
// 				}
// 			}


// 			void	_decrement()
// 			{
// 				if (_node->color == RED && _node->parent->parent == _node)
// 					_node = _node->left;
// 				else if (_node->left)
// 				{
// 					while (_node->right)
// 						_node = _node->right;
// 				}
// 				else
// 				{
// 					// node_ptr_type parent = _node->parent;
// 					pointer parent = _node->parent;
// 					while (_node == parent->left)
// 					{
// 						_node = parent;
// 						parent = parent->parent;
// 					}
// 					_node = parent;
// 				}
// 			}

// 		private:

// 			// node_ptr_type	_node;
// 			// node_ptr_type	_TNULL;
// 			pointer	_node;
// 			pointer	_TNULL;

// 	};
// };


// #endif