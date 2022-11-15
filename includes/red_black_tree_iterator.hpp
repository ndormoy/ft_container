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
			RedBlackTreeIterator(const nodePtr &my_node, const nodePtr &my_TNULL, const nodePtr &my_root)
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

		private:

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
				return (x);
			}

			//TODO Attention quand on a un 0 element
			void _increment ()
			{
				if (_node == _TNULL)
					return ;
				nodePtr x = _node;
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
					_node = _TNULL;
					return;
				}
				_node = y;
			}

			nodePtr predecessor(nodePtr x)
			{
				if (x->left != _TNULL)
					return maximum(x->left);
	
				nodePtr y = x->parent;
				while (y != my_nullptr && x == y->left)
				{
					x = y;
					y = y->parent;
				}
				return y;
			}

		// 	nodePtr
		// _successor (nodePtr x) {
		// 	if (x->right != _TNULL)
		// 		return minimum(x->right);
		// 	nodePtr save = x->parent;
		// 	for(;(save != _TNULL && x == save->right); x = save, save = save->parent);
		// 	return (save); 
		// }

		// nodePtr
		// _predecessor (nodePtr x) {
		// 	if (x->left != _TNULL)
		// 		return maximum(x->left);
		// 	nodePtr save = x->parent;
		// 	for(;(save != _TNULL && x == save->left); x = save, save = save->parent);
		// 	return (save);
		// }


			//TODO Attention quand on a 3 ou 1 ou 0 element
			void	_decrement()
			{
				nodePtr x = _node;
				if (_node == _TNULL)
				{
					std::cout << "max" << std::endl;
					_node =  maximum(_root);
                    return ;
				}
				nodePtr y = x->parent;
				while (y != my_nullptr && x == y->left)
				{
					x = y;
					y = y->parent;
				}
				if (y == my_nullptr && _node != minimum(_root)) {
					std::cout << "non" << std::endl;
					_node = minimum(_root);
					return;
				}
				else if (y == my_nullptr)
				{
					std::cout << "oui" << std::endl;
					_node = _TNULL;
					return ;
				}
				_node = y;
			}


			// void	_decrement()
			// {
			// 	nodePtr x = _node;
			// 	if (_node == _TNULL)
			// 	{
			// 		_node =  maximum(_root);
            //         return ;
			// 	}
			// 	nodePtr y = x->parent;
			// 	while (y != my_nullptr && x == y->left)
			// 	{
			// 		// std::cout << "non" << std::endl;
			// 		x = y;
			// 		y = y->parent;
			// 	}
			// 	if (y == my_nullptr && _node != minimum(_root)) {
			// 		// std::cout << "non" << std::endl;
			// 		_node = minimum(_root);
			// 		return;
			// 	}
			// 	else if (y == my_nullptr)
			// 	{
			// 		std::cout << "oui" << std::endl;
			// 		_node = _TNULL;
			// 		return ;
			// 	}
			// 	_node = y;
			// }



		private:

			nodePtr	_root;
			nodePtr	_node;
			nodePtr	_TNULL;

	};
};


#endif
