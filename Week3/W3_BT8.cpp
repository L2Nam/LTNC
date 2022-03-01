#include <iostream>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    while (a.find("Zues") != string::npos) {
        int i = a.find("Zues");
        a[i + 1] = 'e'; a[i + 2] = 'u';
    }
    cout << a;
    return 0;
}