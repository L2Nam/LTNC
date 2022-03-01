#include <iostream>

using namespace std;

string check(string a);

int main() {
    string a;
    int x;
    getline(cin, a);
    cout << check(a);
    return 0;
}

string check(string a){
    if (a[0] > 47 && a[0] < 58) return "Invalid username.";
    if (a.size() < 6 || a.size() > 15) return "Invalid username.";
    for (int i = 0; i < a.size(); i ++) {
        if (a[i] < 48 || a[i] > 57 && a[i] < 65 || a[i] > 90 && a[i] < 97 || a[i] > 122) return "Invalid username.";
    }
    return "Valid username.";
};