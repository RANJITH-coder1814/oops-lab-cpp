#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Default of Base" << endl;
    }
    Base(int a) {
        cout << "Parameterized of Base"<<a << endl;
    }
};
class Derived : public Base {
public:
    Derived() {
        cout << "Default of Derived" << endl;
    }
    Derived(int a) {
        cout << "Parameterized of Derived"<<a << endl;
    }
    Derived(int a, int b) : Base(a) {
        cout << "Parameterized of Derived"<<b << endl;
    }
};
int main(){
    Derived d(10,45);
}