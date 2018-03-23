#include <iostream>

using namespace std;

class Vector {

int _size;
double* _arr;

public:
Vector(int size) {
_size = size;
_arr = new double[size];
cout << "constructor"<<endl;
}
~Vector() {
if (_arr != nullptr)
delete _arr;
cout << "destructor" <<endl;
}

Vector(const Vector& rhs) {
_size = rhs._size;
_arr = new double[_size];
for (int i = 0; i < _size; ++i) {
_arr[i] = rhs._arr[i];
}
cout << "copy constructor" << endl;
}

Vector(Vector&& rhs) {
_size = rhs._size;
_arr = rhs._arr;
rhs._arr = nullptr;
cout << "move constructor" << endl;
}
};

Vector func(Vector v) {
cout<<"func"<<endl;
return v;
}

int main() {

Vector vec(100);

Vector vec2 = func(vec);
Vector vec3 = func(move(vec));

}
