// Example of Tempalate Class

#include<iostream>
using namespace std;

template <class T>
class Demo {
    T data;

public:
    Demo(T d) {
        data = d;
    }

    void show() {
        cout << "Data is: " << data << endl;
    }
};

int main() {

    Demo<int> d1(10);
    Demo<float> d2(5.5);
    Demo<string> d3("Hello");

    d1.show();
    d2.show();
    d3.show();
}