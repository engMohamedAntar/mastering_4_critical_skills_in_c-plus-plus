#include<iostream>
#include <stack>
using namespace std;
string removeDuplicates(string str)
{
    stack<char> s;
    for(auto ch: str)
    {
        if(!s.empty() && s.top()==ch)
            s.pop();
        else
            s.push(ch);
    }
    str="";
    while(!s.empty())
    {
       str=s.top()+str;
       s.pop();
    }
    return str;
}

int main() {
	cout << removeDuplicates("abbaca") << "\n";//ca
	return 0;
}
