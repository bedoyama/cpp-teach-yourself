#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dynArray (3);

    dynArray[0] = 23;
    dynArray[1] = -231;
    dynArray[2] = 15345;

    cout << "Number of integers in the array: " << dynArray.size() << endl;

    cout << "Enter another number to store in mem: " << endl;
    int newVal = 0;
    cin >> newVal;
    dynArray.push_back(newVal);

    cout << "Number of integers in the array: " << dynArray.size() << endl;
    cout << "Last element is: " << dynArray[dynArray.size() - 1] << endl;

    return 0;
}