#ifndef RED_BLACK_TREE_HPP
#define RED_BLACK_TREE_HPP

#include <iostream>
#define BLACK 0
#define RED 1

#include "nullptr.hpp"
// using namespace std;

struct	Node
{
	int		data;
	Node	*parent;
	Node	*left;
	Node	*right;
	int		color;
};

typedef Node	*NodePtr;

class	RedBlackTree
{
	private:

		NodePtr	root;
		NodePtr	TNULL;

		void	initializeNULLNode(NodePtr node, NodePtr parent)
		{
			node->data = BLACK;
			node->parent = parent;
			node->left = my_nullptr;
			node->right = my_nullptr;
			node->color = BLACK;
		}

	// Preorder
	void preOrderHelper(NodePtr node)
	{
		if (node != TNULL)
		{
			std::cout << node->data << " ";
			preOrderHelper(node->left);
			preOrderHelper(node->right);
		}
	}

	// Inorder
	void	inOrderHelper(NodePtr node)
	{
		if (node != TNULL)
		{
			inOrderHelper(node->left);
			std::cout << node->data << " ";
			inOrderHelper(node->right);
		}
	}

	// Post order
	void postOrderHelper(NodePtr node)
	{
		if (node != TNULL)
		{
			postOrderHelper(node->left);
			postOrderHelper(node->right);
			std::cout << node->data << " ";
		}
	}

	NodePtr	searchTreeHelper(NodePtr node, int key)
	{
		if (node == TNULL || key == node->data)
			return (node);
		if (key < node->data)
			return (searchTreeHelper(node->left, key));
		return (searchTreeHelper(node->right, key));
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

	void deleteNodeHelper(NodePtr node, int key)
	{
		NodePtr z = TNULL;
		NodePtr x, y;
		while (node != TNULL) // find the node
		{
			if (node->data == key)
				z = node;
			if (node->data <= key)
				node = node->right;
			else
				node = node->left;
		}
		if (z == TNULL) // if node not found
		{
			std::cout << "Key not found in the tree" << std::endl;
			return ;
		}
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
		delete (z);
		if (y_original_color == BLACK)
			deleteFix(x);
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

	void printHelper(NodePtr root, std::string indent, bool last)
	{
		if (root != TNULL)
		{
			std::cout << indent;
			if (last)
			{
				std::cout << "R----";
				indent += "   ";
			}
			else
			{
				std::cout << "L----";
				indent += "|  ";
			}

			std::string sColor = root->color ? "RED" : "BLACK";
			std::cout << root->data << "(" << sColor << ")" << std::endl;
			printHelper(root->left, indent, false);
			printHelper(root->right, indent, true);
		}
	}

	public:
	RedBlackTree()
	{
		TNULL = new Node;
		TNULL->color = BLACK;
		TNULL->left = my_nullptr;
		TNULL->right = my_nullptr;
		root = TNULL;
	}

	void preorder()
	{
		preOrderHelper(this->root);
	}

	void inorder()
	{
		inOrderHelper(this->root);
	}

	void postorder()
	{
		postOrderHelper(this->root);
	}

	NodePtr searchTree(int k)
	{
		return (searchTreeHelper(this->root, k));
	}

	// return the last left node ( the minimum node )

	NodePtr minimum(NodePtr node)
	{
		while (node->left != TNULL)
			node = node->left;
		return (node);
	}

	// return the last right node ( the maximum node )

	NodePtr maximum(NodePtr node)
	{
		while (node->right != TNULL) 
			node = node->right;
		return (node);
	}

	NodePtr successor(NodePtr x)
	{
		if (x->right != TNULL)
			return minimum(x->right);

		NodePtr y = x->parent;
		while (y != TNULL && x == y->right)
		{
			x = y;
			y = y->parent;
		}
		return (y);
	}

	NodePtr predecessor(NodePtr x)
	{
		if (x->left != TNULL)
			return maximum(x->left);

		NodePtr y = x->parent;
		while (y != TNULL && x == y->left)
		{
			x = y;
			y = y->parent;
		}
		return y;
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

	// Inserting a node
	void insert(int key)
	{
		NodePtr node = new Node;
		node->parent = my_nullptr;
		node->data = key;
		node->left = TNULL;
		node->right = TNULL;
		node->color = RED;

		NodePtr y = my_nullptr;
		NodePtr x = this->root;

		while (x != TNULL)
		{
			y = x;
			if (node->data < x->data)
				x = x->left;
			else
				x = x->right;
		}

		node->parent = y;
		if (y == my_nullptr)
			root = node;
		else if (node->data < y->data)
			y->left = node;
		else
			y->right = node;

		if (node->parent == my_nullptr)
		{
			node->color = BLACK;
			return;
		}

		if (node->parent->parent == my_nullptr)
			return;

		insertFix(node);
	}

	NodePtr getRoot()
	{
		return this->root;
	}

	void deleteNode(int data)
	{
		deleteNodeHelper(this->root, data);
	}

	void printTree()
	{
		if (root)
			printHelper(this->root, "", true);
	}
};

#endif