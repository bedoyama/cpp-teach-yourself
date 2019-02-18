#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char sayHello [] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};

    cout << sayHello << endl;
    cout << "Size of array sayHello is: " << sizeof(sayHello) << endl;

    cout << "Replacing space with null" << endl;
    sayHello[5] = '\0';
    cout << sayHello << endl;
    cout << "Size of array sayHello is: " << sizeof(sayHello) << endl;
    cout << "Size of string sayHello is: " << strlen(sayHello) << endl;

    return 0;
}