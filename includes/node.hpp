#ifndef NODE_HPP
#define NODE_HPP

#include "nullptr.hpp"
#include "red_black_tree.hpp"
#include "map.hpp"

namespace	ft
{
	template <typename value_type>
	class	Node
	{
		public:

			// default constructor
			Node()
				: parent(my_nullptr), left(my_nullptr), right(my_nullptr), color(RED)
			{

			}
			Node(const value_type &val, Node *parent = my_nullptr, Node *left = my_nullptr, Node *right = my_nullptr, int color = RED)
				: data(val), parent(parent), left(left), right(right), color(color)
			{
				color = RED;
			}

			~Node()
			{
			
			}

			value_type	data;
			Node		*parent;
			Node		*left;
			Node		*right;
			int			color;

			Node	operator=(const Node &other)
			{
				this->data = other.data;
				this->parent = other.parent;
				this->left = other.left;
				this->right = other.right;
				this->color = other.color;
				return (*this);
			}
	};
}

#endif