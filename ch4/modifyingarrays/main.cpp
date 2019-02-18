#include <iostream>
using namespace std;
constexpr int Square(int number) { return number * number; }

int main() {
    const int ARRAY_LENGTH = 5;

    int myNumbers[ARRAY_LENGTH] = {23, 1, -21, -98, 1212};

    // Not initialized -> junk values
    int moreNumbers[Square(ARRAY_LENGTH)];

    cout << "Enter the index of the value to be changed: ";
    int elemIndex = 0;
    cin >> elemIndex;

    cout << "Enter new value: ";
    int newVal = 0;
    cin >> newVal;

    // No checks for index, dangerous code!!!
    myNumbers[elemIndex] = newVal;
    moreNumbers[elemIndex] = newVal;

    cout << "Element with index " << elemIndex << " in array myNumbers is " << myNumbers[elemIndex] << endl;
    cout << "Element with index " << elemIndex << " in array moreNumbers is " << moreNumbers[elemIndex] << endl;
    cout << "Element with index " << elemIndex + 1 << " in array moreNumbers is " << moreNumbers[elemIndex + 1] << endl;

    return 0;
}