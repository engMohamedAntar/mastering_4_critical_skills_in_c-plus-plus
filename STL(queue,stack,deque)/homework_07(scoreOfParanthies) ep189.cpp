#include<iostream>
#include <stack>
using namespace std;


int scoreOfParentheses(string str) {
	stack<int> st;

	st.push(0);

	for (auto c : str) 
	{
		if (c == '(') 
			st.push(0);

		else 
		{
			int last = st.top();
			st.pop();

			if (last == 0)
				last = 1;		
			else
				last *= 2;		

			
			int parent_par = st.top() + last;
			st.pop();          
			st.push(parent_par);//add new top
		}
	}
	return st.top();
}

int main() {
	cout<<scoreOfParentheses(  "(()(()))(()(()))"  )<<endl;	// 12
	 cout<<scoreOfParentheses("()");
	return 0;
}