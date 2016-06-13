#include "Test.h"
#include <iostream>
#include<vector>
#include"Stack.h"
using namespace std;


Test::Test()
{
}


Test::~Test()
{
}

void main(int a) {
	Stack* stack = new Stack();
	stack->push(1);
	stack->push(2);
	
	stack->pop();
	cout << stack->top() << endl;
	cout << stack->empty() << endl;
	system("pause");
}
