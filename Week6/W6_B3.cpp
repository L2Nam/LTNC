#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Repeated number  Frequency\n";
    for (int i = n - 1; i >= 0; i--)
    {
        if (find(a, a + n, a[i]) < &a[i])
            continue;
        if (count(a, a + n, a[i]) != 1)
        {
            cout << setw(17) << left << a[i];
            cout << count(a, a + n, a[i]) << endl;
        }
    }
    return 0;
}