/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:05:58 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/16 14:05:59 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_HPP
#define NODE_HPP

#include "nullptr.hpp"
#include "red_black_tree.hpp"
#include "map.hpp"

namespace	ft
{
	template <typename _value_type>
	class	Node
	{
		public:

			// default constructor
			Node()
				: parent(my_nullptr), left(my_nullptr), right(my_nullptr), color(RED)
			{

			}

			Node(const _value_type &val, Node *parent = my_nullptr, Node *left = my_nullptr, Node *right = my_nullptr, int color = RED)
				: data(val), parent(parent), left(left), right(right), color(color)
			{
				color = RED;
			}

			~Node()
			{
			
			}

			_value_type	data;
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