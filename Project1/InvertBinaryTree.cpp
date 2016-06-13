#include "InvertBinaryTree.h"

class InvertBinaryTree {
public:
	InvertBinaryTree() {

	}
	~InvertBinaryTree() {

	}
	TreeNode* invertTree(TreeNode* root) {
		if (!root) {
			return root;
		} 
		TreeNode * tmp = root->left;
		root->left = invertTree( root->right);
		root->right = invertTree(tmp);
		return root;

	}

};