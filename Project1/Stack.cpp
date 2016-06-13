#include "Stack.h"


Stack::Stack()
{
}


Stack::~Stack()
{
}

void Stack::pop() {
	vect.pop_back();
}
bool Stack::empty() {
	return vect.empty();
}

int Stack::top() {
	return vect[vect.size()-1];
}
void Stack::push(int x) {
	vect.push_back(x);
}