#include "includes/red_black_tree.hpp"
// #include <iostream>
// #include <string>
// #include <vector>
// #include <list>
// #include <memory>
// #include <cassert>
// #include <limits>
// #include <algorithm>
// #include <iterator>
// #include <utility>


using namespace std;

int main()
{
	RedBlackTree bst;
	bst.insert(55);
	bst.insert(40);
	bst.insert(65);
	bst.insert(60);
	bst.insert(75);
	bst.insert(57);
	bst.printTree();
	cout << endl
		<< "After deleting" << endl;
	bst.deleteNode(40);
	bst.printTree();
}