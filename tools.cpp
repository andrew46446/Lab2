#include<iostream>
#include<string>
#include <fstream>

using namespace std;
string Func()
{	
	cout << "Enter the path to file\n";
	string path;
	cin >> path;
	/*ifstream in(path); 
	cout << s << "(length: " << s.length() << ")" << endl;
	in.close();
	return s;*/
	string s;
    ifstream ifs(path);
    if(ifs.is_open())
    {
        s.assign((istreambuf_iterator<char>(ifs.rdbuf())), istreambuf_iterator<char>());
        cout << s<<endl;
        ifs.close();
    }
    else
        cerr << "Unable to open file" << endl;
    return s;
}
