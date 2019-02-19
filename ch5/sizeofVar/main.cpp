#include <iostream>
using namespace std;

int main() {
    cout << "Use of sizeof to determine memory used by arrays" << endl;
    int myNumbers[100] = {0};

    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by an myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an myNumbers[0: " << sizeof(myNumbers[0]) << endl;

    return 0;
}