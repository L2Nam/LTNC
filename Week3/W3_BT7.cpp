#include <iostream>

using namespace std;

int main() {
    int word = 0, number = 0;
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size(); i ++) {
        if (a[i] > 47 && a[i] < 58) number ++;
        if (a[i] > 64 && a[i] < 91 || a[i] > 96 && a[i] < 123) word ++;
    }
    cout << word << " " << number << " " << a.size() - word - number;
    return 0;
}