#include<iostream>
#include<stack>
#include<string>
#include <fstream>
#include "tools.h"

using namespace std;
int main(int argc, char *argv[])
{
	string s = Func();
	stack<char> b;
if(s.length() !=0)
{
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
	b.empty() ? cout << "AllRight"<< endl : cout << "Not correct"<< endl;
}
else {cout << "Not correct"<< endl;}
	return 0;

}
