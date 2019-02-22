#include <iostream>
#include <string>
using namespace std;

int main() {
    int someNums[] = {23, 45, -21212, 322, -121};

    for (const int& aNum : someNums)
        cout << aNum << ' ';
    cout << endl;

    for (int aNum : someNums)
        cout << aNum << ' ';
    cout << endl;

    for (auto anElement : {23, -23, 2123, 653, -32, 21})
        cout << anElement << ' ';
    cout << endl;

    char charArr[] = {'h' ,'e' ,'l' ,'l' ,'o' ,'!'};
    for (auto aChar : charArr)
        cout << aChar << ' ';
    cout << endl;

    double nums[] = {10.212, -3.231, 12134, 12122e29, -21323e-23};
    for (auto aNum : nums)
        cout << aNum << ' ';
    cout << endl;

    string sayHello { "Hello World!" };
    for (auto anElement : sayHello)
        cout << anElement << ' ';
    cout << endl;

    return 0;
}