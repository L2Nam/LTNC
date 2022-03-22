#include <iostream>

using namespace std;

const int number_of_students = 15;

struct student
{
    int roll;
    string name;
    int age;
    string address;
};

void age_14(student a[])
{
    cout << "Names of fourteen students:\n";
    for (int i = 0; i < number_of_students; i++)
    {
        if (a[i].age == 14)
            cout << a[i].name << endl;
    }
}

void even_roll_number(student a[])
{
    cout << "Names of all the students having even roll no:\n";
    for (int i = 0; i < number_of_students; i++)
    {
        if (a[i].roll % 2 == 0)
            cout << a[i].name << endl;
    }
}

void detail(student a[], int n)
{
    cout << "Names of all the students having roll no " << n << ":\n";
    for (int i = 0; i < number_of_students; i++)
    {
        if (a[i].roll == n)
        {
            cout << "Roll number: " << a[i].roll << endl;
            cout << "Name: " << a[i].name << endl;
            cout << "Age: " << a[i].age << endl;
            cout << "Address: " << a[i].address << endl;
        }
    }
}

int main()
{
    student a[number_of_students];
    for (int i = 0; i < number_of_students; i++)
    {
        cout << "Enter roll number: ";
        cin >> a[i].roll;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, a[i].name);
        cout << "Enter age: ";
        cin >> a[i].age;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, a[i].address);
    }
    age_14(a);
    even_roll_number(a);
    int n;
    cout << "Roll number you wanna to search: ";
    cin >> n;
    detail(a, n);
    return 0;
}