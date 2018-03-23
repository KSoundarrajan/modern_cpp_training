#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

vector<int> v = {0,1,2,3,4,5};

for (auto i : v) {
	cout << i << endl;
}

cout << endl;

for (int n : {0,1,2,3,4,5}) {
	cout << n << endl;
}

cout <<endl;

int a[] = {0,1,2,3,4,5};
for (int n : a) {
	cout << n << endl;
}

cout << endl;

map <int, int> keyValue ({{1,1}, {2,2}, {3,3}, {4,4}, {5,5}});
for (auto i : keyValue) {
	cout << i.first << " " << i.second << endl;
}

}
