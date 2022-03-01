#include <iostream>

using namespace std;

int main() {
    string a;
    int x;
    getline(cin, a);
    for (int i = a.size() - 1; i >= 0; i --) {
        if (a[i] != ' ') x = i + 2;
    }
    for (int i = x; i < a.size(); i ++) {
        if (a[i] == ' ' && a[i - 1] == ' ') {
            a.erase(a.begin() + i);
            i --;
        }
    }
    cout << a;
    return 0;
}