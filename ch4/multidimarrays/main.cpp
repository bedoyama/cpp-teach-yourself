#include <iostream>
using namespace std;

int main() {
    int threeRowsThreeCols [3][3] =
            {{-121, 21, 487}, {345, -12344, 98}, {86, 99, -128}};

    cout << "Row 0: " << threeRowsThreeCols[0][0] << " "
         << threeRowsThreeCols[0][1] << " "
         << threeRowsThreeCols[0][2] << endl;

    cout << "Row 1: " << threeRowsThreeCols[1][0] << " "
         << threeRowsThreeCols[1][1] << " "
         << threeRowsThreeCols[1][2] << endl;

    cout << "Row 2: " << threeRowsThreeCols[0][0] << " "
         << threeRowsThreeCols[2][1] << " "
         << threeRowsThreeCols[2][2] << endl;

    return 0;
}