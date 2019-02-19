#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int value = 0;
    cin >> value;

    // value op= thing is the same as value = value op thing
    value += 8;
    cout << "After += 8, " << value << endl;
    value -= 2;
    cout << "After -= 2, " << value << endl;
    value /= 4;
    cout << "After /= 4, " << value << endl;
    value *= 4;
    cout << "After *= 4, " << value << endl;
    value %= 100;
    cout << "After %= 100, " << value << endl;

    cout << "After <<= 1, " << (value <<= 1) << endl;
    cout << "After >>= 2, " << (value >>= 2) << endl;

    cout << "After |= 0x55, " << (value |= 0x55) << endl;
    cout << "After ^= 0x55, " << (value ^= 0x55) << endl;
    cout << "After &= 0x55, " << (value &= 0x55) << endl;

    return 0;
}