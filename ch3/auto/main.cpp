#include <iostream>
using namespace std;
typedef unsigned int POSITIVE_INTEGER;

int main() {
    POSITIVE_INTEGER positiveInteger {6700};

    auto coinFlippedHeads = true;
    auto largeNumber = 2'500'000'000'000;

    cout << "positiveInteger = " << positiveInteger;
    cout << " , sizeof(positiveInteger) =" << sizeof(positiveInteger) << endl;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) =" << sizeof(coinFlippedHeads) << endl;

    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) =" << sizeof(largeNumber) << endl;

    return 0;
}