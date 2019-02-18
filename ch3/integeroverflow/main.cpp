#include <iostream>
using namespace std;

int main() {
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short sShortValue = 32767;
    cout << "Incrementing signed short " << sShortValue << " gives: ";
    cout << ++sShortValue << endl;

    // int and long int are the same
    unsigned int uIntValue = 4294967295;
    cout << "Incrementing unsigned int " << uIntValue << " gives: ";
    cout << ++uIntValue << endl;

    int sIntValue = 2147483647;
    cout << "Incrementing signed int " << sIntValue << " gives: ";
    cout << ++sIntValue << endl;

    unsigned long long int uLongIntValue = 18446744073709551615;
    cout << "Incrementing unsigned long long int " << uLongIntValue << " gives: ";
    cout << ++uLongIntValue << endl;

    long long int sLongIntValue = 9223372036854775807;
    cout << "Incrementing signed long long int " << sLongIntValue << " gives: ";
    cout << ++sLongIntValue << endl;

    return 0;
}