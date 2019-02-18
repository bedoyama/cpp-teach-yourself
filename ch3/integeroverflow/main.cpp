#include <iostream>
using namespace std;

int main() {
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short sShortValue = 32767;
    cout << "Incrementing signed short " << sShortValue << " gives: ";
    cout << ++sShortValue << endl;

    return 0;
}