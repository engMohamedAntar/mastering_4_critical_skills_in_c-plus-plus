#include<iostream>
#include<stack>
using namespace std;


int main() {
	pair<int, string> p = make_pair(10, "mostafa");
	cout<<p.first<<" "<<p.second<<"\n";

	stack< pair<int, string>> s;
	s.push(p);
	s.push(p);

	pair<int, pair<int, string> > my_p;
	my_p = make_pair(10, p);

	return 0;
}
