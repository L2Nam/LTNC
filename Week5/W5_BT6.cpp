#include <iostream>

using namespace std;

struct complex_number
{
    int real_number;
    int imaginary_number;

    complex_number(){};
    complex_number(int _r, int _i)
    {
        real_number = _r;
        imaginary_number = _i;
    }

    complex_number add(complex_number other)
    {
        return complex_number(real_number + other.real_number, imaginary_number + other.imaginary_number);
    }
    complex_number subtract(complex_number other)
    {
        return complex_number(real_number - other.real_number, imaginary_number - other.imaginary_number);
    }
    complex_number multiply(complex_number other)
    {
        return complex_number(real_number * other.real_number - imaginary_number * other.imaginary_number, imaginary_number * other.real_number + real_number * other.imaginary_number);
    }

    void print()
    {
        if (real_number == 0)
        {
            if (imaginary_number == 0)
                cout << 0;
            else if (imaginary_number == 1)
                cout << "i";
            else if (imaginary_number == -1)
                cout << "-i";
            else if (imaginary_number > 0)
                cout << imaginary_number << "i";
            else
                cout << "- " << -imaginary_number << "i";
        }
        else
        {
            if (imaginary_number == 0)
                cout << real_number;
            else if (imaginary_number == 1)
                cout << real_number << " + i";
            else if (imaginary_number == -1)
                cout << real_number << " - i";
            else if (imaginary_number < 0)
                cout << real_number << " - " << -imaginary_number << "i";
            else
                cout << real_number << " + " << imaginary_number << "i";
        }
    }
} n1, n2;

int main()
{
    cout << "Enter 1st Complex number\n";
    cout << "Enter real number: ";
    cin >> n1.real_number;
    cout << "Enter imaginary number: ";
    cin >> n1.imaginary_number;
    n1.print();
    cout << endl;

    cout << "Enter 2nd Complex number\n";
    cout << "Enter real number: ";
    cin >> n2.real_number;
    cout << "Enter imaginary number: ";
    cin >> n2.imaginary_number;
    n2.print();
    cout << endl;

    // add
    cout << "(";
    n1.print();
    cout << ") + (";
    n2.print();
    cout << ") = ";
    n1.add(n2).print();
    cout << endl;

    // subtract
    cout << "(";
    n1.print();
    cout << ") - (";
    n2.print();
    cout << ") = ";
    n1.subtract(n2).print();
    cout << endl;

    // multiply
    cout << "(";
    n1.print();
    cout << ") * (";
    n2.print();
    cout << ") = ";
    n1.multiply(n2).print();
    cout << endl;

    return 0;
}