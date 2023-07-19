#include<iostream>
using namespace std;

int main() {
	    /*in the follwing example, i have a file called "read_file.txt". this file exists in the same
      working directory of the current project.this file is used to read from it instead of reading
      from the console */
	freopen("read_file.txt", "rt", stdin);

	int x, y;
	cin >> x >> y;

	cout << x + y;

	return 0;
}
