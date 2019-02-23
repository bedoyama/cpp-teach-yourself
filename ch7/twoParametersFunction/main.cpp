#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Declaration contains two parameters
double SurfaceArea(double Radius, double Height);

int main()
{
    cout << "Enter the radius of the cylinder: ";
    double InRadius = 0;
    cin >> InRadius;
    cout << "Enter the height of the cylinder: ";
    double InHeight = 0;
    cin >> InHeight;

    cout << "Surface Area: " << SurfaceArea(InRadius, InHeight) << endl;

    cout << "Height value after call: " << InHeight << "\n";

    return 0;
}

double SurfaceArea(double Radius, double Height)
{
    double Area = 2 * Pi * Radius * Radius + 2 * Pi * Radius * Height;
    Height = 0;
    return Area;
}