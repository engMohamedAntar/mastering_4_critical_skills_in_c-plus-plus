#include<iostream>
#include<map>
#include<vector>
using namespace std;

void print(const map<string, int> &mp) {
	//We iterate on maps using pairs
	for (const pair<string, int> &item : mp)	// const with &(because the object is by & then it must be const)
		cout << item.first << "-" << item.second << "\n";
/*	for ( auto &x : mp)
		cout << x.first << "-" << x.second << "\n";*/
}

int main() {
	map<string, int> mp;	// Array with index not integer
	mp["mostafa"] = 10;
	mp["Saad"] = 20;
	mp["mostafa"] = 30;
	mp["Mostafa"] = 40;

	print(mp);	// Mostafa-40 | Saad-20 | mostafa-30 |

	auto it = mp.find("Saad");

	if (it != mp.end())
		mp.erase(it);

	print(mp);	// Mostafa-40 | mostafa-30 |

	cout << mp.count("Mostafa") << "\n";	// 1

	/////////////////////////////
	map<char, vector<int> > my_data;

	vector<int> x;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);

	my_data['A'] = x;
	x.push_back(4);

	cout << my_data['A'].size() << "\n";	// 3
	cout << x.size() << "\n";				// 4  (2 copies)

	vector<int> x2 = my_data['A'];			// 3rd copy!
	vector<int> &x3 = my_data['A'];			// SAME memory

	return 0;
}
