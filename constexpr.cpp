#include <iostream>

using namespace std;

constexpr long int fib(int n) {
	return (n <= 1) ? n : fib(n-1) + fib(n-2);
}

class Rectangle {

int _h;
int _w;

public:
	constexpr Rectangle(int h, int w) : _h(h), _w(w) {}
	constexpr int getArea() const { return _h * _w; }

};

int main() {

const long int res = fib(30);
cout << res <<endl;

constexpr Rectangle obj(10, 20);
cout << obj.getArea() << endl;

}
