#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {

string a = "GeeksForGeeks";

regex b("(Geek)(.*)");

if (regex_match(a, b)) {
	cout << "string a matched expression b" << endl;
}

if (regex_match(a.begin(), a.end(), b)) {
	cout << "string a matches with expression b from range 0 to end" << endl;
}


}
