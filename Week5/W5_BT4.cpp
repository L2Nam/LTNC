#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inch;
} d1, d2, sum;

int main()
{
    cout << "Enter 1st Distance\n";
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "Enter 2nd Distance\n";
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    cout << "Sum of Distance: " << sum.feet << "  " << sum.inch;
    return 0;
}