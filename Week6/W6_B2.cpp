#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (a[j] == a[i])
                break;
            if (j == n - 1)
                cout << a[i] << ' ';
        }
    }
    return 0;
}