#pragma once

#include <iostream>
using namespace std;
class node
{
	int val;
	node* right;
	node* left;
public:
	node(int val = 0);

	node* getchildl();
	node* getchildr();
	int getval();

	void setchildl(node* child);
	void setchildr(node* child);
	void setval(int val);
	friend ostream& operator<<(ostream& os, node* node);
};
