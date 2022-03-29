#include <iostream>
#include <iomanip>

using namespace std;

class employee
{
public:
    string name;
    int year_of_joining;
    double salary;
    string address;
    employee(string _name, int _year_of_joining, double _salary, string _address) : name(_name), year_of_joining(_year_of_joining), salary(_salary), address(_address){};
    void print()
    {
        cout << setw(12) << left << name;
        cout << setw(20) << left << year_of_joining;
        cout << address << endl;
    }
};

int main()
{
    employee Robert("Robert", 1994, 100000000, "64C- WallsStreat");
    employee Sam("Sam", 2000, 200000000, "68D- WallsStreat");
    employee John("John", 1999, 150000000, "26B- WallsStreat");
    cout << "Name        Year of joining     Address\n";
    Robert.print();
    Sam.print();
    John.print();
    return 0;
}