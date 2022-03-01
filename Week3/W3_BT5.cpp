#include <iostream>

using namespace std;

string check(int a[], int n);

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++) cin >> a[i];
    cout << check(a, n);
    return 0;
}

string check(int a[], int n) {    
    for (int i = 0; i < n / 2; i ++) {
        if (a[i] != a[n - i - 1]) return "Asymmetric array.";
    }
    return "Symmetric array.";
};