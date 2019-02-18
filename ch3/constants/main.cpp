#include <iostream>
#include <cmath>
constexpr double GetPi() { return 22.0/7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main() {
    using namespace std;
    const double pi = 22.0/7;

    cout << "The value of the double constant Pi is = " << pi << endl;
    cout << "The value of the constexpr GetPi() is = " << GetPi() << endl;
    cout << "The value of the constepr TwicePi() is = " << TwicePi() << endl;
    cout << "The value of the double constant M_PI is = " << M_PI << endl;

    return 0;
}