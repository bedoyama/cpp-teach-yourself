#include <iostream>
#include <bitset>

using namespace std;

void SimpleOperators();
void ShiftOperators();

int main() {
    SimpleOperators();
    ShiftOperators();

    return 0;
}

void SimpleOperators()
{
    cout << "Enter a number (0 - 255): ";
    unsigned short inputNum = 0;
    cin >> inputNum;

    bitset<8> inputBits(inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    bitset<8> bitwiseNOT = (~inputNum);
    cout << "logical NOT ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT<< endl;

    cout << "logical AND, & with 00001111" << endl;
    bitset<8> bitwiseAND = (0x0F & inputNum);
    cout << "00001111 & " << inputBits << " = " << bitwiseAND<< endl;

    cout << "logical OR, | with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR<< endl;

    cout << "logical XOR, | with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR<< endl;

}

void ShiftOperators()
{
    cout << "Enter a number: ";
    int inputNum = 0;
    cin >> inputNum;

    int halfNum = inputNum >> 1;
    int quarterNum = inputNum >> 2;
    int doubleNum = inputNum << 1;
    int quadrupleNum = inputNum << 2;

    cout << "Half: " << halfNum << endl;
    cout << "Quarter: " << quarterNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;

}
