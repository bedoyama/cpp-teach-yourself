#include <iostream>
#include <string>
using namespace std;

int main() {
    int inputNumber;

    cout << "Enter an integer: ";
    cin >> inputNumber;

    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << " his/her favorite number!" << endl;

    return 0
}