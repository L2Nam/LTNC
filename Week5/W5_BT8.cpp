#include <bits/stdc++.h>

using namespace std;

const int number_of_customers = 10;

struct customer
{
    string name;
    string account_number;
    int balance;
};

void less_than_200(customer a[])
{
    cout << "Names of all the customers having balance less than $200:\n";
    for (int i = 0; i < number_of_customers; i++)
    {
        if (a[i].balance < 200)
            cout << a[i].name << endl;
    }
}

void more_than_1000(customer a[])
{
    int count = 0, j = 0;
    cout << "Balances of all the customers having balance more than $1000:\n";
    for (int i = 0; i < number_of_customers; i++)
    {
        a[i].balance += 100;
        if (a[i].balance > 1000)
            count++;
    }
    int balance[count];
    for (int i = 0; i < number_of_customers; i++)
    {
        if (a[i].balance > 1000)
            balance[j++] = a[i].balance;
    }
    sort(balance, balance + count);
    for (int i = 0; i < count; i++)
        cout << balance[i] << endl;
}

int main()
{
    customer a[number_of_customers];
    for (int i = 0; i < number_of_customers; i++)
    {
        cout << "Enter name: ";
        getline(cin, a[i].name);
        cout << "Enter account number: ";
        cin >> a[i].account_number;
        cout << "Enter balance: ";
        cin >> a[i].balance;
        cin.ignore();
        cout << endl;
    }
    less_than_200(a);
    more_than_1000(a);
    return 0;
}