#ifndef RED_BLACK_TREE_ITERATOR_HPP
#define RED_BLACK_TREE_ITERATOR_HPP

#include "map.hpp"
#include "red_black_tree.hpp"



namespace	ft
{
	template<typename Key, typename T, typename Compare, typename Alloc>
	class RedBlackTreeIterator
	{
		public:

			typedef Key														key_type;
			typedef T														mapped_type;
			typedef std::pair<const Key, T>									value_type;
			typedef Compare													key_compare;
			typedef Alloc													allocator_type;
			typedef std::ptrdiff_t											difference_type;
			typedef std::bidirectional_iterator_tag							iterator_category;


			typedef typename RedBlackTree<Key, T, Compare, Alloc>::node		node_type;
			typedef typename RedBlackTree<Key, T, Compare, Alloc>::NodePtr	node_ptr_type;
			typedef RedBlackTreeIterator<Key, T, Compare, Alloc>			self;



			RedBlackTreeIterator();
			RedBlackTreeIterator(const RedBlackTreeIterator &other);
			// RedBlackTreeIterator &operator=(const RedBlackTreeIterator &other)
			// {

			// }
			~RedBlackTreeIterator();
			self &operator++()
			{
				_increment();
				return (*this);
			}
			self &operator++(int)
			{
				RedBlackTreeIterator tmp(*this);
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
			T &operator*() const
			{
				return (this->_node->data);
			}
			T *operator->() const
			{
				return (&(this->_node->data));
			}

		private:

			void	_increment()
			{
				if (_node->right)
				{
					_node = _node->right;
					while (_node->left)
						_node = _node->left;
				}
				else
				{
					node_ptr_type tmp = _node->parent;
					while (_node == tmp->right)
					{
						_node = tmp;
						tmp = tmp->parent;
					}
					if (_node->right != tmp)
						_node = tmp;
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

			// RedBlackTree<Key, T, Compare, Alloc>	*_tree;
			// typename RedBlackTree<Key, T, Compare, Alloc>::NodePtr	_node;
			node_ptr_type	_node;
	};
};


#endif