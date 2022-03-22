#include <iostream>

using namespace std;

struct student
{
    int roll;
    string name;
    int age;
    int mark;
};

void print_student(student n)
{
    cout << "Student Profile\n";
    cout << "Roll: " << n.roll << endl;
    cout << "Name: " << n.name << endl;
    cout << "Age: " << n.age << endl;
    cout << "Mark: " << n.mark << endl;
}

int main()
{
    student n;
    cout << "Enter roll number: ";
    cin >> n.roll;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, n.name);
    cout << "Enter age: ";
    cin >> n.age;
    cout << "Enter mark: ";
    cin >> n.mark;
    cout << endl;
    print_student(n);
    return 0;
}