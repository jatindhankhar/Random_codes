//Took hint from https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%20272%20-%20TEX%20Quotes/src/UVa%20272%20-%20TEX%20Quotes.cpp
//Problem was  string replacing so solution was to just output them , even better than appending to new string
//Also was checking "" instead of " -_-
#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	bool open = true;

	while (getline(cin,line)) {
		for (auto i : line) {
			if (i == '"') {
				if (open)
					cout<<"``";
				else
					cout<<"''";

				open = !open;
			} else
				cout<<i;
		}
		cout<<"\n";
	}

	return 0;
}
