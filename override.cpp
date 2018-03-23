#include <iostream>

using namespace std;

class Base {

public:
virtual void Draw() {
cout << "Base::Draw" << endl;
}
};

class Derived : public Base{

public:
void Draw() override {
cout << "Derived::Draw" << endl;
}

};


int main() {

Base b;
Derived d;

b.Draw();
d.Draw();

}
