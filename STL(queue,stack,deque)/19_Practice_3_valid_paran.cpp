#include<iostream>
#include <map>
#include <stack>
using namespace std;

bool isValid(string string) 
{
    map<char, char> mp;	// mp the close of each
    mp[')'] = '(';
    mp[']'] = '[';
    mp['}'] = '{';

    stack<char> parentheses;

    for (char ch: string) 
	{
    	if (mp.count(ch)) //ch is a key (closing bracket)
		{
    		// A close one. It must match open one
    		if (parentheses.empty()) //if there is no opening brackets
    			return false;

    		char open = mp[ch];
    		char cur_open = parentheses.top();

    		if (open != cur_open)
    			return false;
    		parentheses.pop();

    	}
    	else //ch is a value (opening bracket)
    		parentheses.push(ch);
    }
    return parentheses.empty();// if it is empty it will return true else it will return fasle
}


int main() {
	cout<<isValid("()")<<"\n";
	cout<<isValid("()()")<<"\n";
	cout<<isValid("(()())")<<"\n";
	cout<<isValid("{}{}")<<"\n";
	cout<<isValid("(((())))")<<"\n";
	cout<<isValid("([])")<<"\n";
	cout<<isValid("()[]{}")<<"\n";
	cout<<isValid("{[]}")<<"\n";

	cout<<isValid("(]")<<"\n";
	cout<<isValid("())")<<"\n";
	cout<<isValid("(][)")<<"\n";
	cout<<isValid("(]")<<"\n";
	cout<<isValid(" ([)]")<<"\n";



	return 0;
}