/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_red_black_tree.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <ndormoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:06:10 by ndormoy           #+#    #+#             */
/*   Updated: 2022/11/30 18:44:39 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_RED_BLACK_TREE_HPP
#define SET_RED_BLACK_TREE_HPP

#include <iostream>


#include "nullptr.hpp"
#include "red_black_tree_iterator.hpp"
#include "node.hpp"

namespace	ft
{
	template<typename value_type, typename Compare, typename Alloc >
	class	SetRedBlackTree
	{

		public:

			/*
			----------------------------------------------------------------------------------------------------------------
														TYPEDEF AND STUFF
			----------------------------------------------------------------------------------------------------------------
			*/

			typedef value_type												const_value_type;
			typedef Compare													key_compare;
			typedef Alloc													allocator_type;
			typedef std::bidirectional_iterator_tag							iterator_category;
			typedef typename allocator_type::reference						reference;
			typedef typename allocator_type::const_reference				const_reference;

			/*
			----------------------------------------------------------------------------------------------------------------
														ITERATORS
			----------------------------------------------------------------------------------------------------------------
			*/

			typedef std::size_t												size_type;
			typedef std::ptrdiff_t											difference_type;
			typedef ft::Node<value_type>									*NodePtr;

		private:

			/*
			----------------------------------------------------------------------------------------------------------------
															ATTRIBUTES
			----------------------------------------------------------------------------------------------------------------
			*/

			NodePtr	root;
			NodePtr	TNULL;

		public:

			

			/*
			----------------------------------------------------------------------------------------------------------------
															Link rbt and node
			----------------------------------------------------------------------------------------------------------------
			*/

			// Permet d'avoir tout le temps un type node pour que allocator::construct() puisse fonctionner
			typedef typename Alloc::template rebind<Node<value_type> >::other	allocator_type_rebinded;
			typedef typename std::allocator<Node<value_type> >::pointer			pointer;

			/*
			---------------------------------------------------------------------------------------------------------------
															CONSTRUCTOR AND DESTRUCTOR RBT
			---------------------------------------------------------------------------------------------------------------
			*/

			SetRedBlackTree()
			{
				_allocator = allocator_type();
				_comp = key_compare();
				TNULL = _allocator.allocate(sizeof(Node<value_type>));
				_allocator.construct(TNULL, Node<value_type>(value_type(), my_nullptr, my_nullptr, my_nullptr, BLACK));
				TNULL->color = BLACK;
				TNULL->left = my_nullptr;
				TNULL->right = my_nullptr;
				root = TNULL;
			}


			~SetRedBlackTree()
			{
			}

		/*
		----------------------------------------------------------------------------------------------------------------
														PRIVATE VARIABLES
		----------------------------------------------------------------------------------------------------------------
		*/

		private:

			allocator_type_rebinded	_allocator;
			key_compare				_comp;

		/*
		----------------------------------------------------------------------------------------------------------------
														PRIVATE FUNCTIONS
		----------------------------------------------------------------------------------------------------------------
		*/
		public:

			// Clear, all the tree --> destroy and deallocate all nodes in the tree
			void clear() 
			{ 
				remove_node(this->root);
				root = TNULL;
			}

			void	clear_TNULL()
			{
				_allocator.destroy(TNULL);
				_allocator.deallocate(TNULL, sizeof(Node<value_type>));
			}

			// Return the first element in the tree (The minimum)
			pointer	begin()
			{
				// printTree();
				return (minimum(root));
			}

			// Return the first element in the tree (The minimum)
			pointer	const_begin() const
			{
				// printTree();
				return (const_minimum(root));
			}

			// Return the last element in the tree (The maximum)
			pointer	end()
			{
				return (maximum(root));
			}

			// Return the last element in the tree (The maximum)
			pointer	const_end() const
			{
				return (const_maximum(root));
			}

			size_type 	count(const_value_type &val) const
			{
				if (root == TNULL || val == root->data)
					return (root);
				if (_comp(val, root->data))
					return (count(root->left, val));
				return (count(root->right, val));
			}

		/*
            ----------------------------------------------------------------------------------------------------------------
                                                        GETTERS
            ----------------------------------------------------------------------------------------------------------------
		*/

		public:

			NodePtr getTNULL()
			{
				return (TNULL);
			}

			NodePtr const_getTNULL() const
			{
				return (TNULL);
			}


		private:

			void remove_node(NodePtr node) 
			{ 
				if (node == TNULL)
					return ; 
				remove_node(node->left); 
				remove_node(node->right); 
				_allocator.destroy(node);
				_allocator.deallocate(node, sizeof(Node<value_type>));
			}

			void	initializeNULLNode(NodePtr node, NodePtr parent)
			{
				node->data = BLACK;
				node->parent = parent;
				node->left = my_nullptr;
				node->right = my_nullptr;
				node->color = BLACK;
			}

			NodePtr searchTreeHelper(NodePtr node, const_value_type key)
			{
				if (key == node->data)
					return (node);
				else if (node == TNULL)
					return (TNULL);
				else if (_comp(key, node->data))
					return (searchTreeHelper(node->left, key));
				return (searchTreeHelper(node->right, key));
			}

			NodePtr const_searchTreeHelper(NodePtr node, const_value_type key) const
			{
				if (key == node->data)
					return (node);
				else if (node == TNULL)
					return (TNULL);
				else if (_comp(key, node->data))
					return (const_searchTreeHelper(node->left, key));
				return (const_searchTreeHelper(node->right, key));
			}

			// For balancing the tree after deletion
			void deleteFix(NodePtr x)
			{
				NodePtr s;
				while (x != root && x->color == BLACK)
				{
					if (x == x->parent->left)
					{
						s = x->parent->right;
						if (s->color == RED)
						{
							s->color = BLACK;
							x->parent->color = RED;
							leftRotate(x->parent);
							s = x->parent->right;
						}
						if (s->left->color == BLACK && s->right->color == BLACK)
						{
							s->color = RED;
							x = x->parent;
						}
						else
						{
							if (s->right->color == BLACK)
							{
								s->left->color = BLACK;
								s->color = RED;
								rightRotate(s);
								s = x->parent->right;
							}
							s->color = x->parent->color;
							x->parent->color = BLACK;
							s->right->color = BLACK;
							leftRotate(x->parent);
							x = root;
						}
					}
					else
					{
						s = x->parent->left;
						if (s->color == RED)
						{
							s->color = BLACK;
							x->parent->color = RED;
							rightRotate(x->parent);
							s = x->parent->left;
						}

						if (s->right->color == BLACK && s->right->color == BLACK)
						{
							s->color = RED;
							x = x->parent;
						}
						else
						{
							if (s->left->color == BLACK)
							{
								s->right->color = BLACK;
								s->color = RED;
								leftRotate(s);
								s = x->parent->left;
							}
							s->color = x->parent->color;
							x->parent->color = BLACK;
							s->left->color = BLACK;
							rightRotate(x->parent);
							x = root;
						}
					}
				}
				x->color = BLACK;
			}

			// Delete the node U and raccord the node V to U parent

			void rbTransplant(NodePtr u, NodePtr v)
			{
				if (u->parent == my_nullptr)
					root = v;
				else if (u == u->parent->left)
					u->parent->left = v;
				else
					u->parent->right = v;
				v->parent = u->parent;
			}

			bool deleteNodeHelper(NodePtr node, value_type key)
			{
				NodePtr z = TNULL;
				NodePtr x, y;
				while (node != TNULL) // find the node
				{
					if (node->data == key)
						z = node;
					if (_comp(node->data, key))
						node = node->right;
					else
						node = node->left;
				}
				if (z == TNULL) // if node not found
					return (false);
				y = z;
				int	y_original_color = y->color;
				if (z->left == TNULL) // Swap the node with the right child because de the left child is NULL
				{
					x = z->right;
					rbTransplant(z, z->right);
				}
				else if (z->right == TNULL) // Swap the node with the left child because the right child is NULL
				{
					x = z->left;
					rbTransplant(z, z->left);
				}
				else
				{
					y = minimum(z->right);
					y_original_color = y->color;
					x = y->right;
					if (y->parent == z)
						x->parent = y;
					else
					{
						rbTransplant(y, y->right);
						y->right = z->right;
						y->right->parent = y;
					}

					rbTransplant(z, y);
					y->left = z->left;
					y->left->parent = y;
					y->color = z->color;
				}
				_allocator.destroy(z);
				_allocator.deallocate(z, sizeof(Node<value_type>));
				if (y_original_color == BLACK)
					deleteFix(x);
				return (true);
			}

			// https://algorithmtutor.com/Data-Structures/Tree/Red-Black-Trees/

			// For balancing the tree after insertion
			void insertFix(NodePtr k)
			{
				NodePtr u;
				while (k->parent->color == RED) // case 3 : P is RED
				{
					if (k->parent == k->parent->parent->right) // P is right child of G
					{
						u = k->parent->parent->left;
						if (u->color == RED) // case 3.1 : P is RED and U is RED ( and P is right child of G )
						{
							u->color = BLACK;
							k->parent->color = BLACK;
							k->parent->parent->color = RED;
							k = k->parent->parent;
						}
						else // case 3.2 : P is RED and U is BLACK ( P is right child of G )
						{
							if (k == k->parent->left) // case 3.2.2
							{
								k = k->parent;
								rightRotate(k);
							}
							// case 3.2.1
							k->parent->color = BLACK;
							k->parent->parent->color = RED;
							leftRotate(k->parent->parent);
						}
					}
					else //  P is left child of G
					{
						u = k->parent->parent->right;

						if (u->color == RED) // case 3.1 : P is RED and U is RED (and P is left child of G)
						{
							u->color = BLACK;
							k->parent->color = BLACK;
							k->parent->parent->color = RED;
							k = k->parent->parent;
						}
						else // case 3.1 : P is RED and U is BLACK (P is left child of G)
						{
							if (k == k->parent->right) // case 3.2.4
							{
								k = k->parent;
								leftRotate(k);
							}
							// case 3.2.3
							k->parent->color = BLACK;
							k->parent->parent->color = RED;
							rightRotate(k->parent->parent);
						}
					}
					if (k == root) // if k == root we stop de loop because the tree is balanced
						break;
				}
				// rule 1 : the root is always black
				root->color = BLACK;
			}

			void leftRotate(NodePtr x)
			{
				NodePtr y = x->right;
				x->right = y->left;
				if (y->left != TNULL)
					y->left->parent = x;
				y->parent = x->parent;
				if (x->parent == my_nullptr)
					this->root = y;
				else if (x == x->parent->left)
					x->parent->left = y;
				else
					x->parent->right = y;
				y->left = x;
				x->parent = y;
			}
	
			void rightRotate(NodePtr x)
			{
				NodePtr y = x->left;
				x->left = y->right;
				if (y->right != TNULL)
					y->right->parent = x;
				y->parent = x->parent;
				if (x->parent == my_nullptr)
					this->root = y;
				else if (x == x->parent->right)
					x->parent->right = y;
				else
					x->parent->left = y;
				y->right = x;
				x->parent = y;
			}
			// void printHelper(NodePtr root, std::string indent, bool last)
			// {
			// 	if (root != TNULL)
			// 	{
			// 		std::cout << indent;
			// 		if (last)
			// 		{
			// 			std::cout << "R----";
			// 			indent += "   ";
			// 		}
			// 		else
			// 		{
			// 			std::cout << "L----";
			// 			indent += "|  ";
			// 		}

			// 		std::string sColor = root->color ? "RED" : "BLACK";
			// 		std::cout << root->data;
			// 		std::cout << "(" << sColor << ")" << std::endl;
			// 		printHelper(root->left, indent, false);
			// 		printHelper(root->right, indent, true);
			// 	}
			// }

			// void const_printHelper(NodePtr root, std::string indent, bool last) const
			// {
			// 	if (root != TNULL)
			// 	{
			// 		std::cout << indent;
			// 		if (last)
			// 		{
			// 			std::cout << "R----";
			// 			indent += "   ";
			// 		}
			// 		else
			// 		{
			// 			std::cout << "L----";
			// 			indent += "|  ";
			// 		}

			// 		std::string sColor = root->color ? "RED" : "BLACK";
			// 		std::cout << root->data;
			// 		std::cout << " && second = " << root->data.second;
			// 		std::cout << "(" << sColor << ")" << std::endl;
			// 		const_printHelper(root->left, indent, false);
			// 		const_printHelper(root->right, indent, true);
			// 	}
			// }

		public:

			NodePtr searchTree(const_value_type k)
			{
				return (searchTreeHelper(this->root, k));
			}

			NodePtr const_searchTree(const_value_type k) const
			{
				return (const_searchTreeHelper(this->root, k));
			}
	
			// return the last left node ( the minimum node )
	
			NodePtr minimum(NodePtr node) const
			{
				if (!node)
					return (TNULL);
				while (node->left && node->left != TNULL)
					node = node->left;
				return (node);
			}

			NodePtr const_minimum(NodePtr node) const
			{
				if (!node)
					return (TNULL);
				while (node->left && node->left != TNULL)
					node = node->left;
				return (node);
			}

			// return the last right node ( the maximum node )
			NodePtr maximum(NodePtr node)
			{
				if (!node)
					return (TNULL);
				while (node->right && node->right != TNULL) 
					node = node->right;
				return (node);
			}

			NodePtr const_maximum(NodePtr node) const
			{
				if (!node)
					return (TNULL);
				while (node->right && node->right != TNULL) 
					node = node->right;
				return (node);
			}

			pointer	insert(value_type key)
			{
				NodePtr node = _allocator.allocate(sizeof(Node<value_type>));
				_allocator.construct(node, Node<value_type>(key, my_nullptr, TNULL, TNULL, RED));
				NodePtr y = my_nullptr;
				NodePtr x = this->root;

				while (x != TNULL)
				{
					y = x;
					if (_comp(node->data, x->data))
						x = x->left;
					else if (_comp(x->data, node->data))
						x = x->right;
					else
					{
						_allocator.destroy(node);
						_allocator.deallocate(node, sizeof(Node<value_type>));
						return NULL;
					}
				}
				node->parent = y;
				if (y == my_nullptr)
					root = node;
				else if (_comp(node->data, y->data))
					y->left = node;
				else
					y->right = node;
				if (node->parent == my_nullptr)
				{
					node->color = BLACK;
					return node;
				}
				if (node->parent->parent == my_nullptr) {
					return node;
				}
				insertFix(node);
				return (node);
			}

			NodePtr getRoot()
			{
				return (this->root);
			}

			NodePtr const_getRoot() const
			{
				return (this->root);
			}

			bool deleteNode(value_type data)
			{
				return (deleteNodeHelper(this->root, data));
			}
	
			// void printTree() const
			// {
			// 	if (root)
			// 		printHelper(this->root, "", true);
			// }

			// void const_printTree() const
			// {
			// 	if (root)
			// 		const_printHelper(this->root, "", true);
			// }

	};
};

#endif