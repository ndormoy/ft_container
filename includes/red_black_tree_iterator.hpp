#ifndef RED_BLACK_TREE_ITERATOR_HPP
#define RED_BLACK_TREE_ITERATOR_HPP

#include "map.hpp"
#include "red_black_tree.hpp"
#include "nullptr.hpp"
#include "node.hpp"

namespace	ft
{
	template<typename value_type, typename node>
	class RedBlackTreeIterator
	{
		public:

			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type		difference_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, node >::pointer					pointer;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_type		iterator_type;
			typedef pointer 																				node_ptr_type;
			typedef RedBlackTreeIterator<value_type, node >													self;


			RedBlackTreeIterator(node_ptr_type my_node = my_nullptr)
				: _node(my_node)
			{
				std::cout << "RBT iterator constructor 1" << std::endl;
			}

			RedBlackTreeIterator(const RedBlackTreeIterator &other)
				: _node(other._node)
			{
				std::cout << "RBT iterator constructor 2" << std::endl;
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

			value_type	*operator->() const
			{
				// std::cout << "operator->" << std::endl;
				return (&(this->_node->data));
			}

		private:

			// void	_increment()
			// {
			// 	if (this->_node->right != my_nullptr)
			// 	{
			// 		this->_node = this->_node->right;
			// 		while (this->_node->left != my_nullptr)
			// 			this->_node = this->_node->left;
			// 	}
			// 	else
			// 	{
			// 		node_ptr_type tmp = this->_node;
			// 		this->_node = this->_node->parent;
			// 		while (this->_node->right == tmp)
			// 		{
			// 			tmp = this->_node;
			// 			this->_node = this->_node->parent;
			// 		}
			// 		if (this->_node->right != tmp)
			// 			this->_node = this->_node->parent;
			// 	}
			// }

			void _increment()
            {
				if (_node->right != my_nullptr)
				{
					_node = _node->right;
					while (_node->left != my_nullptr)
						_node = _node->left;
				}
				else
				{
					node_ptr_type y = _node->parent;
					while (_node == y->right)
					{
						_node = y;
						y = y->parent;
					}
					if (_node->right != y)
						_node = y;
				}
			}


			void	_decrement()
			{
				if (_node->color == RED && _node->parent->parent == _node)
					_node = _node->left;
				else if (_node->left)
				{
					while (_node->right)
						_node = _node->right;
				}
				else
				{
					node_ptr_type parent = _node->parent;
					while (_node == parent->left)
					{
						_node = parent;
						parent = parent->parent;
					}
					_node = parent;
				}
			}

		private:

			node_ptr_type	_node;

	};
};


#endif