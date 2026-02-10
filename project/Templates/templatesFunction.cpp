// Example of Tempalate Function

#include<iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {

    cout << "Max (int): " << findMax(10, 20) << endl;
    cout << "Max (float): " << findMax(5.5, 2.3) << endl;
    cout << "Max (char): " << findMax('A', 'Z') << endl;

}