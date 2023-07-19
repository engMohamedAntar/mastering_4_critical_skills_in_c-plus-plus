#include<iostream>
#include <set>
#include <tuple>	// tie
using namespace std;

struct employee {
	int num1, num2;
	string str;

	employee(int a, int b, string name) {
		num1 = a, num2 = b, str = name;
	}

	bool operator <(const employee& rhs) const {
		// compare as we did before
			if (num1 != rhs.num1)
				return num1 < rhs.num1;

			if (str != rhs.str)
				return str < rhs.str;

			return num2 < rhs.num2;
		

		/*
		// second method: use pair
		return make_pair(num1, make_pair(str, num2))
				< make_pair(rhs.num1, make_pair(rhs.str, rhs.num2));
		

		//third way: use tie: must be variables
		return std::tie(num1, str, num2) <
				std::tie(rhs.num1, rhs.str, rhs.num2);
		*/
	}
};

int main() {
	/*to insert an object in an ordered set a "<" operator must be defiend in the class because
	elements of the oreded set are ordered in a decending order*/
	
	set<employee> s;
	employee e1(10, 35, "mostafa");
	employee e2(7, 15, "ali");
	employee e3(10, 17, "ziad");
	employee e4(10, 20, "mostafa");
	s.insert(e1);
	s.insert(e2);
	s.insert(e3);
	s.insert(e4);

	for (auto emp : s)
		cout << emp.num1 << " " << emp.str << " " << emp.num2 << "\n";

	return 0;
}

