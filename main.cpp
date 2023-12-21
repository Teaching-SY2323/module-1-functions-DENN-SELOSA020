#include <iostream>

using namespace std;

float Add2Values(float, float);

int main()
{
    float x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    cout << "Enter y Values: ";
    cin >> y;

	cout << "The 2 values is equals to ";
    
    cout << Add2Values(x, y);

    return 0;
}

float Add2Values(float x, float y)
{
    return x + y;
}
