#include <iostream>
using namespace std;

int main()
{
   int Age = 35;
   int* pInteger = &Age;

   // Displaying the value of pointer
    cout << "Integer Age is at: 0x" << hex << pInteger << endl;
    cout << "Integer Age value is: " << dec << *pInteger << endl;

    return 0;
}