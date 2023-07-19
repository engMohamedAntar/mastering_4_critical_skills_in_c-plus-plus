#include <vector>
#include <iostream>
using namespace std;

struct number
{
	int num=5;
	int &get_num() //will return by reference
	{
		return num;
	}
	
};

// NEVER do so. num will be destroyed (why returning by reference as long as num will be destroyed)
string &get_num() 
{
	int num=5;
	return num;
}

int main() {
	number obj;
	int &x=obj.get_num();
	x=10;
	cout<<obj.num<<endl;//10

	obj.get_num()=15; //notice this wierd syntax
	cout<<obj.num<<endl;//15

	return 0;
}
