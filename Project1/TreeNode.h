#pragma once
#include <iostream>
class  TreeNode {
public:
	int val; 
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val):val(val),left(NULL),right(NULL) {
		
	}
};