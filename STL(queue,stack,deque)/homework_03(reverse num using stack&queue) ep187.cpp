#include<iostream>
#include <queue>
#include<stack>
using namespace std;
//using a queue
/*int reverse_num(int num)
{
    queue<int> q;
    while(num!=0)
    {
        int x=num%10;
        num/=10;
        q.push(x);
    }
    while(!q.empty())
    {
        num*=10;
        num+=q.front();
        q.pop();
    }
    return num;
}*/
//using a stack
int reverse_num(int num)
{
    stack<int> s;
    while(num!=0)
    {
        int x=num%10;
        num/=10;
        s.push(x);
    }
    int tens=1;
    while(!s.empty())
    {
        num=s.top()*tens+num;
        s.pop();
        tens*=10;
    }
    return num;
}

int main() {
    int num =1234;
    cout<<reverse_num(num);

	return 0;
}
