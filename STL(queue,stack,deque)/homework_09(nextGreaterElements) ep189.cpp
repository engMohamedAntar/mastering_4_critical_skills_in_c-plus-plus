#include<iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int> &v) //5,2,8,7
{											 //s [2,3]
	stack<int> pos ;						 //r [8,8,-1,-1]
	vector<int> result(v.size(),-1);
	for(int i=0;i<v.size();i++)
	{
		while (!pos.empty() && v[i] > v[pos.top()])
		{
			result[pos.top()]=v[i];
			pos.pop();
		}
		pos.push(i);
	}
	return result;
}

int main() {
	vector<int> v {5,2,8,7};
	v=nextGreaterElements(v);
	for(auto x:v)
		cout<<x<<" "; // 8 8 -1 -1
	
	return 0;
}
