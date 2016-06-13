#pragma once
#include<vector>
class Stack
{
public:
	Stack();
	~Stack();
	std::vector<int> vect;
	void push(int x); 
	void pop();
	int top();
	bool empty();
};

