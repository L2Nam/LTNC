#include <iostream>

using namespace std;

struct student
{
    int roll;
    string name;
    float chem_marks, maths_marks, phy_maths;
};

const int number_of_students = 5;

int main()
{
    student n[number_of_students];
    for (int i = 0; i < number_of_students; i++)
    {
        cout << "Enter roll number: ";
        cin >> n[i].roll;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, n[i].name);
        cout << "Enter Chemistry mark: ";
        cin >> n[i].chem_marks;
        cout << "Enter Mathematics mark: ";
        cin >> n[i].maths_marks;
        cout << "Enter Physics mark: ";
        cin >> n[i].phy_maths;
        cout << endl;
    }

    for (int i = 0; i < number_of_students; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "  Percentage: " << n[i].chem_marks / 3 + n[i].maths_marks / 3 + n[i].phy_maths / 3 << "%\n";
    }
    return 0;
}