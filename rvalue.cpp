#include <iostream>

using namespace std;

int global = 0;

int& func() {
	return global;
}

int main() {

int i = 5;
int& r= i;

int v[3];
*(v+2) = 5;

for (int i = 0; i < 3; i++) {
	cout << v[i] << endl;
}

int i1 = func();
cout << global << endl;

// reference
func() = 1000;

cout << global <<endl;


}
