#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i <= n; i ++) cin >> a[i];
    sort(a, a + n + 1);
    for (int i = 0; i <= n; i ++) cout << setprecision(2) << fixed << a[i] << " ";
    return 0;
}