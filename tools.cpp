#include<iostream>
#include<string>
#include <fstream>

using namespace std;
string Func()
{	
cout << "Enter the path to file\n";
	string path;
	cin >> path;
	string s;
	std::ifstream in(path); 
	std::cout << s << std::endl;
	cout << s << "(length: " << s.length() << ")" << std::endl;
	in.close();
	return s;
}
