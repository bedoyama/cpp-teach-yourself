#include <iostream>
using namespace std;

int firstNumber = 12, secondNumber = 12;
int mulResult = firstNumber * secondNumber;

void MultiplyNumbers ()
{
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    mulResult = firstNumber * secondNumber;

    cout << firstNumber << " times " << secondNumber;
    cout << " equals " << mulResult << endl;

}

int main() {

    cout << "Predefined numbers (12 x 12 = 144)." << endl;

    cout << firstNumber << " times " << secondNumber;
    cout << " equals " << mulResult << endl;

    cout << "This program will multiply two numbers entered by the user now." << endl;

    MultiplyNumbers();

    cout << "Numbers in main after function." << endl;
    cout << firstNumber << " times " << secondNumber;
    cout << " equals " << mulResult << endl;

    return 0;
}