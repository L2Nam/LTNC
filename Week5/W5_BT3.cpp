#include <iostream>
#include <iomanip>

using namespace std;

struct student
{
    int roll;
    string name;
    int age;
    string address;
    int mark;
};

void print_student(student n)
{
    cout << setw(6) << left << n.roll;
    cout << setw(17) << left << n.name;
    cout << setw(5) << left << n.age;
    cout << setw(25) << left << n.address;
    cout << setw(4) << left << n.mark << endl;
}

const int number_of_students = 15;

int main()
{
    student n[number_of_students];
    for (int i = 0; i < number_of_students; i++)
    {
        n[i].roll = i + 1;
        cout << "For roll number " << n[i].roll << endl;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, n[i].name);
        cout << "Enter age: ";
        cin >> n[i].age;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, n[i].address);
        cout << "Enter mark: ";
        cin >> n[i].mark;
    }
    cout << "\nStuden Information\nRoll  Name             Age  Address                  Mark\n";
    for (int i = 0; i < number_of_students; i++)
        print_student(n[i]);
    return 0;
}