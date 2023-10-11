#include<iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << "Last element in Queue: " << q.back() << "\n";

	cout << "Queue elements: ";
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << "\n";
	//Notice that you Can't iterate over the queue this way.
	/*for(auto x: q)    //error
        cout<<i<< " ";*/ 
	queue<string> q_names;
	q_names.push("mostafa");
	string name = q_names.front();

	return 0;
}
