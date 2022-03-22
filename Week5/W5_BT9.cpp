#include <iostream>

using namespace std;

const int number_of_employees = 10;

struct employee
{
    string name;
    float salary;
    float hour_of_word;
};

void increase_salary(employee a[])
{
    for (int i = 0; i < number_of_employees; i++)
    {
        if (a[i].hour_of_word >= 12)
            a[i].salary += 150;
        else if (a[i].hour_of_word >= 10)
            a[i].salary += 100;
        else if (a[i].hour_of_word >= 8)
            a[i].salary += 50;
    }
    for (int i = 0; i < number_of_employees; i++)
    {
        cout << a[i].name << "   " << a[i].salary << endl;
    }
}

int main()
{
    employee a[number_of_employees];
    for (int i = 0; i < number_of_employees; i++)
    {
        cout << "Enter name: ";
        getline(cin, a[i].name);
        cout << "Enter salary: ";
        cin >> a[i].salary;
        cout << "Enter hour_of_word: ";
        cin >> a[i].hour_of_word;
        cin.ignore();
        cout << endl;
    }

    increase_salary(a);

    return 0;
}