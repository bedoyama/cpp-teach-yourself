#include <iostream>
using namespace std;

int main() {
    cout << "Question 1: " << endl;
    cout << "Use values (0/1) to answer the questions: " << endl;
    cout << "Is it raining? ";
    bool isRaining = false;
    cin >> isRaining;

    cout << "Do you have buses on the streets? ";
    bool busesPly = false;
    cin >> busesPly;

    if (isRaining && !busesPly)
        cout << "Stay home" << endl;
    else
        cout << "You can go to work" << endl;

    if ((!isRaining) && busesPly)
        cout << "Enjoy the weather" << endl;

    if (isRaining && busesPly)
        cout << "Take an umbrella" << endl;

    cout << "Question 2: " << endl;
    cout << "Use values (0/1) to answer the questions: " << endl;
    cout << "Is there a discount on your favorite car? ";
    bool onDiscount = false;
    cin >> onDiscount;

    cout << "Did you get a fantastic bonus? ";
    bool gotBonus = false;
    cin >> gotBonus;

    if (onDiscount || gotBonus)
        cout << "Congrats you can buy a new car!" << endl;
    else
        cout << "Waiting seems a good idea!" << endl;

    if (!onDiscount)
        cout << "Car not on discount!" << endl;

    return 0;
}