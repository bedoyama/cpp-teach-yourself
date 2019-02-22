#include <iostream>
using namespace std;

int main() {
    cout << "Enter two integers" << endl;
    float num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << "Enter \'d\' to multiply, anything else to muliply: ";
    char userSelection = '\0';
    cin >> userSelection;

    int result = 0;
    if (userSelection == 'd')
    {
        cout << "you wish to divide!" << endl;
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "result is: " << result << endl;
        } else
        {
            cout << "division by 0 not allowed!" << endl;
        }

    }
    else
    {
        cout << "you wish to multiply!" << endl;
        result = num1 * num2;
        cout << "result is: " << result << endl;
    }


    return 0;
}