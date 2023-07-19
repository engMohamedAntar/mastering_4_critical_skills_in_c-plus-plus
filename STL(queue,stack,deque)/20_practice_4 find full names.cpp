#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main() {
	map<string, vector<string>> mp;

	cout << "Enter the number of names" << endl;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		cout << "Number of words in the full name and the words" << endl;
		int num;
		cin >> num;

		string str;
		string full_name = "";
		vector<string> names;

		for (int j = 0; j < num; j++) 
		{
			cin >> str;

			if (j)
				full_name += " ";

			full_name += str;
			names.push_back(full_name);
		}

		for (const auto &name : names)
			mp[name].push_back(full_name);
	}
	///////////////////////////////////////
	cout << "Enter the number of queries" << endl;
	int num_queries;
	cin >> num_queries;

	while(num_queries--)
	{
		cout << "Number of words in the full name and the words to query" << endl;
		int num_strings;
		cin >> num_strings;

		string str;
		string full_name = "";

		for (int j = 0; j < num_strings; j++) 
		{
			cin >> str;

			if (j)
				full_name += " ";

			full_name += str;
		}

		if (mp.count(full_name)) //if full_name is a key element in the map
		{
			for(auto str: mp[full_name]) //iterate over the value of the full_name
				cout<<str<<"\n";
		} 
		else
			cout << "No such sub name" << endl;
	}
	return 0;
}
