//============================================================================
// Name        : Week2_Set2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& a){
	set<string> b;
	for(const auto&[key, value] : a){
		b.insert(value);
	}
	return b;
}

int main() {
	set<string> values = BuildMapValuesSet({
	    {1, "odd"},
	    {2, "even"},
	    {3, "odd"},
	    {4, "even"},
	    {5, "odd"}
	});

	for (const string& value : values) {
	  cout << value << endl;
	}
}
