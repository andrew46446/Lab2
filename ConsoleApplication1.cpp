//#include "Pch.h"
#include<iostream>
#include<stack>
#include<string>
#include <fstream>
#include "tools.h"

using namespace std;
int main()
{
	string s  =Func();
	stack<char> b;
	for (auto c : s) {
		if (!b.empty() && ((c == ')') && (b.top() == '(')) ||
			((c == ']') && (b.top() == '[')) ||
			((c == '}') && (b.top() == '{'))) {
			b.pop();
		}
		else if (c == ')' || c == ']' || c == '}') {
			cout << "Not correct";
			return 0;
		}
		else {
			b.push(c);
		}
	}
	b.empty() ? cout << "AllRight" : cout << "Not correct";

	return 0;

}
