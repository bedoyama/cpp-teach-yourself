#include <iostream>
#include <cstdint>

int main() {
    using namespace std;

    cout << "Computing the size of some C++ inbuilt types:" << endl;

    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of uint8_t: " << sizeof(uint8_t) << endl;
    cout << "Size of int8_t: " << sizeof(int8_t) << endl;
    cout << "Size of uint16_t: " << sizeof(uint16_t) << endl;
    cout << "Size of int16_t: " << sizeof(int16_t) << endl;
    cout << "Size of uint32_t: " << sizeof(uint32_t) << endl;
    cout << "Size of int32_t: " << sizeof(int32_t) << endl;
    cout << "Size of uint64_t: " << sizeof(uint64_t) << endl;
    cout << "Size of int64_t: " << sizeof(int64_t) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;

    cout << "The output changes with OS, compiler, and hardware:" << endl;

    return 0;
}