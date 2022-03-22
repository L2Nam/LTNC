#include <iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
    void print()
    {
        cout << month << "/" << day << "/" << year << endl;
    };
};

int number_of_days(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    default:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            return 29;
        else
            return 28;
    }
};

int main()
{
    Date now;
    int day_max, day = 45;

    cout << "Enter year: ";
    cin >> now.year;
    if (now.year < 1)
    {
        cout << "Wrong year, try again!!\n";
        cout << "Enter year: ";
        cin >> now.year;
    }

    cout << "Enter month: ";
    cin >> now.month;
    if (now.month < 1 || now.month > 12)
    {
        cout << "Wrong month, try again!!\n";
        cout << "Enter month: ";
        cin >> now.month;
    }

    day_max = number_of_days(now.month, now.year);

    cout << "Enter day: ";
    cin >> now.day;
    if (now.day < 1 || now.day > day_max)
    {
        cout << "Wrong day, try again!!\n";
        cout << "Enter day: ";
        cin >> now.day;
    }

    now.print();
    cout << "45 days later:\n";
    day = day + now.day - day_max;
    now.month++;
    if (now.month == 13)
    {
        now.month = 1;
        now.year++;
    }
    now.day = day % number_of_days(now.month, now.year);
    now.month = now.month + day / number_of_days(now.month, now.year);
    if (now.month == 13)
    {
        now.month = 1;
        now.year++;
    }
    now.print();
    return 0;
}