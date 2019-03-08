#include <iostream>
using namespace std;

int main()
{
    int Age = 30;

    int* pInteger = &Age;
    cout << "pInteger points to Age now" << endl;

    // Displaying the value of pointer
    cout << "pInteger = 0x" << hex << pInteger << endl;
    cout << "value of *pInteger = " << dec << *pInteger << endl;

    int DogsAge = 9;
    pInteger = &DogsAge;
    cout << "pInteger points to DogsAge now" << endl;

    cout << "pInteger = 0x" << hex << pInteger << endl;
    cout << "value of *pInteger = " << dec << *pInteger << endl;

    return 0;
}