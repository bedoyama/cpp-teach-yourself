#include <iostream>
using namespace std;

int main() {
    int startValue = 101;

    int postfixInc = startValue++;
    cout << "postfixInc final value: " << postfixInc << endl;
    cout << "startValue final value: " << startValue << endl;

    int prefixInc = ++startValue;
    cout << "prefixInc final value: " << prefixInc << endl;
    cout << "startValue final value: " << startValue << endl;

    int postfixDec = startValue--;
    cout << "postfixDec final value: " << postfixDec << endl;
    cout << "startValue final value: " << startValue << endl;

    int prefixDec = --startValue;
    cout << "prefixDec final value: " << prefixDec << endl;
    cout << "startValue final value: " << startValue << endl;

    return 0;
}