#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

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

vector<int> result;
map<int, int> key_value ({{1,2}, {3,4}, {5,6}, {7,8}, {9,10}});
for (auto i : key_value) {
	result.push_back(pow(i.first, distance(key_value.find(i.first), key_value.end())) + i.second);
	cout << i.first << distance(key_value.find(i.first), key_value.end()) << endl;

}

int ar[6] = {1,2,3,4,5,-6};
all_of(ar, ar+6, [] (int x) {return x > 0;}) ? cout << "all are positive" << endl : cout << "all are not positive" << endl;

any_of(ar, ar+6, [] (int x) {return x < 0;}) ? cout << "all are not positive" << endl : cout << "all are positive" << endl;

none_of(ar, ar+6, [] (int x) {return x == 0;}) ? cout << "none are zeros" << endl : cout << "there exists a zero" << endl;


int copy_vec[6];
copy_n(ar+2, 4, copy_vec);
for(auto i : copy_vec) {
	cout << i << endl;
}



}
