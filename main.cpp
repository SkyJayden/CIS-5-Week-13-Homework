#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// Practice 13 · Part 1 — Jayden MB
// CIS 5 Week 13 · Word tools

string banner(const string& name) {
	// TODO: return "Hello, " + name + "!"
	return "Hello, " + name + "!";
}

string initials(const string& first, const string& last) {
	string out = "";
	if (first.size() > 0) {
		out += first[0];
	}
	if (last.size() > 0) {
		out += last[0];
	}
	return out;
}

int main() {		
	string first, last;
	cout << "First: ";
	cin >> first;
	cout << "Last: ";
	cin >> last;

	string full = first + " " + last;
	cout << banner(full) << endl;
	cout << "Length: " << full.size() << endl;
	cout << "Initials: " << initials(first, last) << endl;

	return 0;
} 
