#include <iostream>
using namespace std;

int main() {
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Funday
    };

    cout << "Find fun info about a day of the week" << endl;
    cout << "Enter a number for the day you want (Sunday = 0): ";
    int dayInput = Sunday;
    cin >> dayInput;

    switch (dayInput)
    {
        case Sunday:
            cout << "Sunday was named after the Sun" << endl;
            break;
        case Monday:
            cout << "Monday was named after the Moon" << endl;
            break;
        case Tuesday:
            cout << "Tuesday was named after Mars" << endl;
            break;
        case Funday:
            cout << "Funday was named after me and you" << endl;
            break;
        default:
            cout << "Wrong input, try again!" << endl;
            break;
    }

    return 0;
}